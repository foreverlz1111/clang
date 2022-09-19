
#include<stdio.h>
#include<math.h>

int main()
{
	printf("请您输入三个数字");
	int a, b, c, s;

	scanf("%d%d%d%d", &a, &b, &c);
	s = (a + b + c)/3;
	
	printf("%d" , s );
	return 0;
}