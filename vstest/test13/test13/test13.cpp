// test13.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{
	printf("请您输入三个数字");
	int a, b, c, s;

	scanf("%d%d%d", &a, &b, &c);
	s = (a + b + c) / 3;

	printf("%d", s);
	return 0;
}