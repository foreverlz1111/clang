// test15.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{
	printf("请输入一个华氏度温度数值");
	double f, c;
		scanf("%lf", &f);
		c = ( f - 32 )* 5 / 9 ;
		printf("对应的摄氏度为:%2f", c);
		return 0;

}

