// Test29.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
void fun(int a, int b, int c, int add, int mult)

{

	add = a + b + c;

	mult = a * b*c;

	printf("add=%d    mult=%d\n", add, mult);

}
int main() {
	int add = 1; int mult = 1;
	printf("add=%d    mult=%d\n", add, mult);
}