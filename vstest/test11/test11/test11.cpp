// test11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{
	double x1, x2, y1, y2, s, i;
	scanf("%lf%lf%lf%lf", &x1, &x2, &y1, &y2);
	i = (x1 - x2) * (y1 - y2) * (y1 - y2);
	s = sqrt(i);
	printf("您输入的两座标点的距离是:%.2f", s);
	return 0;
}
