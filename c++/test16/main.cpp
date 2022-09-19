#include <stdio.h>
int main(int argc,char *argv[]){
	char a[] = "helloccc\n";
	//gets(a);
	puts(a);
	while(argc > 1){
		++argv;
		printf("%s\n",*argv);
		argc--;
	}
	return 0;
}
