// Test19.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
//第二题

int main()
{
	int x, y;
	scanf("%d", &x);
	if (x >= 0, x <= 8)
		y = x + 2 * x*x + 10;
	else
		y = x - 3 * x*x*x - 9;
	printf("%d", y);
	return 0;
}
