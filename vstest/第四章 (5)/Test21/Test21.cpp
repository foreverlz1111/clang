// Test21.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<math.h>

int main()
{
	int a = 0, b = 0, c = 0, s = 0, S = 0;
	scanf("%d%d%d", &a, &b, &c);
	s = (a + b + c) / 2;
	S = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("%d", &S);
	return 0;
}

