#include "pch.h"
#include <stdio.h>
double min(double x, double y)
 {
	double m;
	if (x < y) 
		m = x;
	else m = y;
	return m;
 }
int main()
{
	double a, b, t, mindate;
	printf("please input a b:\n");
	scanf("%d1%d1", &a, &b);
	t = min(a, b);
	mindate = min(t, b);
	printf("min=%f\ln", mindate);
	return 0;





}
