#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int x,tmp;
	int a[11] = { 8,18,28,38,48,58,68,78,88,98 };
	printf("输入：");
	scanf_s("%d", &x);
	a[10] = x;
	for (int i = 0; i < 10; i++) 
		for(int k =0;k<11-i-1;k++)
		if (a[k] > a[k + 1]) {
			tmp=a[k];
			a[k]=a[k+1];
			a[k+1]=tmp;
		}
	for (int s=0;s<11;s++)
		printf("%3d\n", a[s]);
	return 0;
}