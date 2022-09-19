// Test36.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
struct comp
{
	double x, y;
	double  m;
};
double compare(struct comp a, struct comp b)
// 定义函数比较两个复数是否相等
{
	a.m = sqrt(a.x*a.x + a.y*a.y);
	b.m = sqrt(b.x*b.x + b.y*b.y);
	return (a.m - b.m);   // 若返回0，表示两个复数相等；否则不相等
}

int main()
{
	struct comp s1, s2;
	printf("Input :\n");
	scanf("%lf%lf", &s1.x, &s1.y);
	scanf("%lf%lf", &s2.x, &s2.y);
	if (compare(s1, s2) == 0)  // 结构变量作为函数参数
		printf("Equal\n");
	else printf("Unequal\n");
	return 0;
}
