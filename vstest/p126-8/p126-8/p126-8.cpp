// p126-8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<math.h>
double sum = 0;
double tol(double x,double n) {
	printf("%lf", pow(x, n));
	return 0;
}

int main()
{
	double x = 0, n = 0;
	scanf("%lf%lf", &x, &n);
	tol(x, n);
}