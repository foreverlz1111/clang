//#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int neicun = 200;//内存块默认大小
int fqNum = 1;//已使用分区数目，进程数目=fqNum-1
#define number 100//进程数量
struct fqinfo//分区信息
{
	int start;//开始位置
	int end;//结束位置
	char name;//进程名称
	int big;//进程大小或者分区块大小
	int flag;//分区使用标记，0：未使用   1：已使用  2:回收或者合并的分区  3:尾部
}fqlist[number];

int init_neicun();//初始化内存大小
int alloc_mem(char name, int size);//首次适应算法
int fenpei();//为进程存储区
int showit();//显示进程
int menu();//功能菜单
int recycling();//内存回收
int exit();//退出系统

int init_neicun() {
	for (int i = 0; i < number; i++) {
		fqlist[i].name = '无';//初始名字为无
		fqlist[i].start = 0;//初始开始位置为0
		fqlist[i].end = 0;//初始结束位置也显示为0
		fqlist[i].big = 0;//初始大小也为0
		fqlist[i].flag = 0;//此时未被使用 flag=0
	}
	printf("请输入内存大小:");
	scanf("%d", &neicun);
	printf("内存大小neicun=%d\n", neicun);
	fqlist[0].big = neicun;
	fqlist[0].start = 0;//开始位置
	fqlist[0].end = neicun - 1;//结束位置
	fqlist[0].flag = 3;//尾部
	return 0;
}

/*===================================================================*
 *                            fenpei                                 *
 *===================================================================*/


int fenpei() {//输出进程（添加进程）
	getchar();
	char name;
	int lang;
	printf("请输入进程的名称和大小（空格分隔）：");
	scanf("%c %d", &name, &lang);
	alloc_mem(name, lang);
	return 0;
}

/*===================================================================*
 *                          alloc_mem                                *
 *===================================================================*/


int alloc_mem(char jname, int size) {//内存的分配以及分区块的使用 其中a就是fenpei（）方法里面的name，而size就是进程的大小
	int flag = 0;//默认情况分配失败 分配成功时候 再赋值为0
	int sum = 0;

	for (int i = 0; i < number&&flag == 0; i++) {//即进程数量小于100且未被使用
		if (fqlist[i].flag != 1) {//当某一分区不在使用时
			if (fqlist[i].big > size)
			{
				if (i < number - 1) {

					for (int j = number - 1; j > i; j--)//这里的for语句是为了分配内存，已使用内存块增加

					{
						fqlist[j] = fqlist[j - 1];
					}



					fqlist[i + 1].name = 'wait';

					fqlist[i + 1].start = sum + size;
					fqlist[i + 1].end = fqlist[i].end;

					fqlist[i + 1].big = fqlist[i].big - size;
					fqlist[i + 1].flag = fqlist[i].flag;


				}
				fqlist[i].name = jname;
				fqlist[i].start = sum;//初始是sum=0，此时下一个进程（当i还等于0的时候，也就是第一个进程）的初始位置
									//就是上一个进程的结束位置再加1
				fqlist[i].end = sum + size - 1;
				fqlist[i].big = size;
				fqlist[i].flag = 1;
				fqNum++;//进程数目增1
				//需要把以后的分区块往后一个位置
				flag = 1;
			}
			else {
				//当未使用的分区块大小不足时
				sum = sum + fqlist[i].big;
			}
		}
		else {//当该分区块在使用时
			sum = sum + fqlist[i].big;
			//count++;//记录已查询出的分区块个数
		}
	}
	if (flag != 1)
		printf("分配内存区失败！\n");
	return 0;
}

/*===================================================================*
 *                          recycling                                *
 *===================================================================*/

int recycling() {//内存的回收
	int flag = 0;//标记回收是否成功 0：失败    1：成功
	char jname;
	getchar();//吸收空白键
	printf("请输入进程名称:");
	scanf("%c", &jname);
	for (int i = 0; i < number; i++) {
		if (fqlist[i].name == jname) {
			fqlist[i].name = 'wait';
			fqlist[i].flag = 2;//表示为回收的内存区
			flag = 1;
			fqNum--;
		}
	}
	if (flag == 1)
		printf("进程%c结束，内存回收成功！\n", jname);
	else
		printf("进程%c无法结束，内存回收失败！\n", jname);
	//将连续的已回收的内存区合并
	while (flag < 3) {
		for (int i = 0; i < number - 1; i++) {
			if (fqlist[i].flag == 0 || fqlist[i].flag == 2) {
				if (fqlist[i + 1].flag != 1) {
					if (fqlist[i + 1].flag == 3)
					{
						fqlist[i].end = fqlist[i + 1].end;
						fqlist[i].big = fqlist[i].big + fqlist[i + 1].big;
						fqlist[i].flag = fqlist[i + 1].flag;
						for (int j = i + 1; j < number - 1; j++)
						{
							fqlist[j] = fqlist[j + 1];
						}
						i = number;
						flag++;
					}
					else {
						fqlist[i].end = fqlist[i + 1].end;
						fqlist[i].big = fqlist[i].big + fqlist[i + 1].big;
						fqlist[i].flag = fqlist[i + 1].flag;
						for (int j = i + 1; j < number - 1; j++)
						{
							fqlist[j] = fqlist[j + 1];
						}
					}
				}
			}
		}
		flag++;

	}
	return 0;
}
int showit() {//显示进程情况
	int count = 0;
	printf("\n---------------------------------------\n");
	printf("进程名称   开始位置   结束位置   进程大小   状态\n");
	for (int i = 0; i < number - 1 && count < fqNum; i++)
	{
		printf("%5c%10d%12d%10d", fqlist[i].name, fqlist[i].start, fqlist[i].end, fqlist[i].big);
		if (fqlist[i].flag == 1) {
			printf("     已使用\n");
			count++;
		}
		else if (fqlist[i].flag == 3) {
			printf("     尾部\n");
			count++;
		}
		else if (fqlist[i].flag == 2) {
			printf("     未使用\n");
		}
		else if (fqlist[i].flag == 0) {
			printf("     未使用\n");
		}
	}
	printf("\n---------------------------------------\n");
	return 0;
}

int exit() {
	printf("按任意键退出.....\n");
	exit(0);
	return 0;
}

int main() {
	init_neicun();//初始化内存大小
	menu();
	return 0;
}
int menu() {
	char select;
	scanf("%c", &select);
	switch (select) {
	case  'a':fenpei(); showit(); break;
	case  'f':recycling(); showit(); break;
	case  'e':exit(); break;
	}
	menu();
	return 0;
}

