// Teat17.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
//这是第四个题目！！！！！！！！！！！！！！！！/这是第四个题目！！！！！！！！！！！！！！！！/这是第四个题目！！！！！！！！！！！！！！！！
// 这是第四个题目！！！！！！！！！！！！！！！！ / 这是第四个题目！！！！！！！！！！！！！！！！ / 这是第四个题目！！！！！！！！！！！！！！！！
int main()
{	
	int x, y, a;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x > 0) {

		if (y >= 0)
			a = (x * x) + (y * y);
		else
			a = x + y;
	}
	else
	
	{
	
		if (y < 0)
			a = (x * x) - (y * y);
		else
			a = x - y;
	}
	printf("%d", &a);
	
	return 0;

}
