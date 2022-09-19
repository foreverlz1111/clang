#include <stdio.h>

/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

int number1 = 3,number2 = 5;

int f6_2(int a,int b){
    int c;
    c=a>b?a:b;
    return c;
}
int f6_4(int a){
    int b = 0;
    static int c = 3;
    a = c++,b++;
    return a;
}
int f6_5(int x,int y){
    int z;
    z=x>y?x:y;
    return z;
}
int p6_7(int x,int y){
    int z;
    z = x>y?x:y;
    return z;
}
int f6_8(int a){
     int b = 0;//[auto] C++ 11标准后不再使用
    static int c = 3;
    b = b + 1;
    c = c + 1;
    return a+b+c;
}
long f_multiplication(int flag){
    static int a = 1;
    if (flag == 1)
        a = 0;
    return a++;
}
int main() {
    /*6-2*/
    int number1 =9;
    printf("f6_2 :%d\n", f6_2(number1,number2));

    /*6-4*/
    int number4 =2,number5;
    for (int i = 0; i < 2; ++i) {
        number5 = f6_4(number4++);
    }
    printf("number5 = %d\n",number5);

    /*6-5*/
    extern int number6,number7;
    printf("f6_5() :%d\n", f6_5(number6,number7));

    /*6-7*/
    extern int number8 ,number9;
    printf("f6_7(): = %d\n", p6_7(number8,number9));

    /*6-8*/
    int number10 = 2;
    for (int i = 0; i < 3; i++) {
        printf("f6_8() :%d \n", f6_8(number10));
    }

    /*习题三*/
    long number11=0;
    for (int i = 1; i <= 40; i++) {
        number11 += f_multiplication(0);
    }
    printf("40!= %ld \n",number11);
    f_multiplication(1);
    number11=0;
    for (int i = 1; i <= 80; i++) {
        number11 += f_multiplication(0);
    }
    printf("80!= %ld \n",number11);
    f_multiplication(1);
    number11=0;
    for (int i = 1; i <= 100; i++) {
        number11 += f_multiplication(0);
    }
    printf("100!= %ld \n",number11);

    return 0;
}
int number6 = 23,number7 = 9;
int number8 = 3,number9 = 5;