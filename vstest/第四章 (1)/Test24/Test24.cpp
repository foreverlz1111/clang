// Test24.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<math.h>
#include <stdio.h>

void fun(int a, int b, int c, int add, int mult)

{

	add = a + b + c;

	mult = a * b*c;

	printf("add=%d    mult=%d\n", add, mult);

}

int main()

{

	int x, y;

	x = y = 0;

	fun(9, 12, -4, x, y);

	printf("add=%d    mult=%d\n", x, y);

	return 0;

}