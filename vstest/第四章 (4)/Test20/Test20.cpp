// Test20.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
//第三题
int main()
{
	int t,e = 0,d = 0,c = 0,b = 0,a =0;
	printf("快输入一个数字!!!!");
	scanf("%d", &t);
	if (t < 0 || t >100)
	{
		printf("输入错了,再次输入");
	}
	switch (t / 10) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:e; printf("等级为E"); break;
	case 6:d; printf("等级为D"); break;
	case 7:c; printf("等级为C"); break;
	case 8:b; printf("等级为B"); break;
	case 9:
	case 10:a; printf("等级为A"); break;
	}
	
   }


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
