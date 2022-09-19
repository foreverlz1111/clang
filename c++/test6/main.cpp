//#include "pch.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct block_info//分区信息
{
    char name;//进程名称
    int use;//进程大小或者分区块大小
    int elem;//进程的编号
    int start;
    int end;
    int flag;//分区使用标记，0：未使用   1：已使用  2:回收或者合并的分区  3:尾部
};
typedef struct Link{
    block_info blockInfo;
    struct Link *next;
}link;
link * alloc_mem_node();//创建进程
link * delete_node();//删除进程
link * initLink();//初始化
link * insertElem(link * p,int elem,int add);//插入节点
link * delElem(link * p,int add);//删除链表结点
int selectElem(link * p,int elem);//查找进程
link *amendElem(link * p,int add,int newElem);//新增进程数量
void display(link *p);//显示链表

// 根据编号查找
//link *amendElem(link * p,int add,int newElem){
//    link * temp=p;
//    temp=temp->next;//tamp指向首元结点
//    //temp指向被删除的
//    for (int i=1; i<add; i++) {
//        temp=temp->next;
//    }
//    temp->blockInfo.elem=newElem;
//    return p;
//}
void display(link *p){
    link* temp=p;//将temp指针重新指向头结点
    //只要temp指针指向的结点的next不是Null，就执行输出语句。
    while (temp->next) {
        temp=temp->next;
        printf("%3d %4c %5d %5d %5d \n",temp->blockInfo.elem,temp->blockInfo.name,temp->blockInfo.use,temp->blockInfo.start,temp->blockInfo.end);
    }
    printf("\n");
}


link * initLink(){
    link * p=(link*)malloc(sizeof(link));//创建一个头结点
    link * temp=p;//遍历链表
    //生成链表
    for (int i=1; i<10; i++) {
        link *a=(link*)malloc(sizeof(link));
        a->blockInfo.elem=i;
        a->blockInfo.name='/';
        a->blockInfo.use = 0;
        a->blockInfo.start = 0;
        a->blockInfo.end = 0;
        a->next=NULL;
        temp->next=a;
        temp=temp->next;
    }
    return p;
}//创建10个进程容量的链表  //讲这个1/3

link * alloc_mem_node(link * p,char name,int mem){
    //第一次分配
    link * t=p;//temp
    int i=1;
    int sum=0;
    while (t->next) {
        t=t->next;
        if (t->blockInfo.use==0) {
            break;//
        } else{
            sum+=t->blockInfo.use;//占用的内存
        }
        i++;
    }
    printf("已经分配内存 %3d \n",sum);
    while (t->next) {
        if (t->blockInfo.use==0 && sum<200) {
            //内存不超，进程数不超
            t->blockInfo.name = name;
            t->blockInfo.use = mem;
            if (sum == 0){
                t->blockInfo.start = 0;
                t->blockInfo.end = mem-1;
            } else{
                t->blockInfo.start = sum-1;
                t->blockInfo.end = sum+mem-1;
            }
            break;
        }
        i++;
    }
    return p;
} //讲这个2/3

link * delete_node(link * p,char name){
    link * temp=p;
    //遍历到需要删除进程的上一个结点
    for (int i=1; i<10; i++) {
        if(temp->blockInfo.name==name){
            temp=temp->next;
            break;
        }
    }
    temp->next->blockInfo.name='/';
    temp->next->blockInfo.use=0;
    temp->next->blockInfo.start = 0;
    temp->next->blockInfo.end =0;
//    free(del);
    for (int j = 0; j < 10; j++) {

    }
    return p;
}  //讲这个3/3

int main() {
    //初始化链表（1...10）
    printf("初始化内存10个大小链表为：\n");
    link *p=initLink();
    display(p);

    printf("分配a进程进入第一个内存，大小为10\n");
    printf("序号   进程   占用  开始位置  结束位置\n");
    p = alloc_mem_node(p,'a',10);
    display(p);


    printf("分配b进程进入第一个内存，大小为10\n");
    printf("序号   进程   占用  开始位置  结束位置\n");
    p = alloc_mem_node(p,'b',10);
    display(p);

    printf("清除进程a，释放所占用的内存\n");
    printf("序号   进程   占用  开始位置  结束位置\n");
    p = delete_node(p,'a');
    display(p);


    return 0;
}


