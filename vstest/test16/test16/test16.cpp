// test16.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<math.h>

int main()
{
	float a = 0, b = 0 ;
	printf("请输入a和b\n");

	scanf("%f%f",&a,&b);
	b *= 11;
	a += 3.3;
	if (a == b)
		printf("ok,a==b\n");

	else {
		printf("NO,a!=b\n");
	}
			return 0;
}