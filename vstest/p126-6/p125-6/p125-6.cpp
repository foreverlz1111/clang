// Test126-6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
int days(int day, int month, int year) {
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
		if (month == 1)
			printf("这是今年的第%d天", day);
		else if (month == 2)
			printf("这是今年的第%d天", day + 31);
		else if (month == 3)
			printf("这是今年的第%d天", day + 60);
		else if (month == 4)
			printf("这是今年的第%d天", day + 91);
		else if (month == 5)
			printf("这是今年的第%d天", day + 121);
		else if (month == 6)
			printf("这是今年的第%d天", day + 152);
		else if (month == 7)
			printf("这是今年的第%d天", day + 182);
		else if (month == 8)
			printf("这是今年的第%d天", day + 213);
		else if (month == 9)
			printf("这是今年的第%d天", day + 244);
		else if (month == 10)
			printf("这是今年的第%d天", day + 274);
		else if (month == 11)
			printf("这是今年的第%d天", day + 305);
		else if (month == 12)
			printf("这是今年的第%d天", day + 335);

	}
	else
	{
		if (month == 1)
			printf("这是今年的第%d天", day);
		else if (month == 2)
			printf("这是今年的第%d天", day + 31);
		else if (month == 3)
			printf("这是今年的第%d天", day + 60);
		else if (month == 4)
			printf("这是今年的第%d天", day + 91);
		else if (month == 5)
			printf("这是今年的第%d天", day + 121);
		else if (month == 6)
			printf("这是今年的第%d天", day + 152);
		else if (month == 7)
			printf("这是今年的第%d天", day + 182);
		else if (month == 8)
			printf("这是今年的第%d天", day + 213);
		else if (month == 9)
			printf("这是今年的第%d天", day + 244);
		else if (month == 10)
			printf("这是今年的第%d天", day + 274);
		else if (month == 11)
			printf("这是今年的第%d天", day + 305);
		else if (month == 12)
			printf("这是今年的第%d天", day + 335);
	}
	return day;
}
int main()
{
	int r = 0, y = 0, n = 0;
	scanf("%d\n%d\n%d", &r, &y, &n);
	days(r, y, n);
}