// Test37.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<string.h>
#include<stdio.h>
#include "Test37.h"
void clean(char a[6]) {
	int ac = 0, bc = 0, cc = 0;
	for (int i = 0; i < 6; i++) {
		if (a[i] == 'a') {
			
			if (ac >= 1)
				a[i] = ' ';
			ac++;
		}
		if (a[i] == 'b') {
			if (bc >= 1)
				a[i] = ' ';
			bc++;
		}
		if (a[i] == 'c') {
			if (cc >= 1)
				a[i] = ' ';
			cc++;
		}
	}
}
int main() {
	char a[6] = { 'a','a','b','b','c','c' };
	clean(a);
	for (int i = 0; i < 6; i++) {
		printf("%c", a[i]);
	}
	return 0;
}
