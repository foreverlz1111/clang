// p126-9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

double S(double x1, double x2, double y1, double y2) {
	double s = 0;
	s = sqrt((x1 - x2)*(x1 - x2) - (y1 - y2)*(y1 - y2));
	printf("%lf", s);
	return 0;
}
int main()
{	
	double a = 0, b = 0, c = 0, d = 0;
	printf("请依次输入x1,x2,y1,y2\n");
	scanf("%lf %lf %lf  %lf",&a,&b,&c,&d);
	S(a, b, c, d);
}