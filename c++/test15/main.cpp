#include <iostream>//for c++
#include <unistd.h>
//#include<stdio.h>//for c
using  namespace std;
int main() {
    pid_t pid;
    int x =1;
    pid = fork();
    if (pid == 0)
        printf("pid = %d \t child: x = %d\n",pid,++x);
    else
        printf("pid = %d \t  father: x = %d\n",pid,--x);

   return 0;
}
