#include<stdio.h>
#include"add.h"
#include"mul.h"
int main(){
	float a, b;
	scanf("%f%f", &a, &b);
	mul(a, b);
	return 0;
}