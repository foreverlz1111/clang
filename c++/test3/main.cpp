#include <iostream>

int main() {
    int a=5,b=3;
    int s=3;
    int g=2;
    printf("%d\n",g+=g*=++s*3);
   printf("%d\n", a+=a*=++b*3) ;
   printf("%d\n",a>b?s:b);
    return 0;
}
