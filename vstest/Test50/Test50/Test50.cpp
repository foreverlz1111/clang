// Test50.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
int location(int n, int k) {
	int s = 0;
	for (; k > 0; k--) {
		s = n % 10;
		n = n / 10;
	}
	return s;
}
int main() {
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	int s = location(n, k);
	printf("%d", s);
}