// Test38.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
int main()
{
	double  y=0;
	int x=0;
	scanf("%d", &x);
	if (x < 0 && x != -3)
		y = (x * x) + x - 6;
	else if ((x = 0 || x > 0 )&& (x < 10) && x != 2 && x != 3)
		y = (x * x) - (5 * x) + 6;
	else
		y = x * x - x - 1;
	printf("%.3f", y);
	return 0;
}
	
