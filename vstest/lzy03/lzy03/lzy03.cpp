#include"pch.h"
#include<stdio.h>
double min(double x, double y)
{
	double m;
	if (x < y)
		m = x;
	else
		m = y;
	return m;
	
}
int main()
{
	double a, b,c;
	printf("请输入数字 a，b :\n");
	scanf("%lf%lf%lf", a, b,c);
	c=min (a , b);
	printf("min=%f\n",c);
	
}