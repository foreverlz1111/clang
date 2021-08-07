#include <stdio.h>

#include "math.h"
/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/
#define MAXNUM 10
float f5_1(float fx){
    return (fx * fx * fx);
}
int f5_3(int a,int b){
    if(a > b)
        return a;
    else
        return b;
}
void f5_4(int x,int y){
    int z;
    z = x;
    x = y;
    y = z;
    printf("行参：x=%d,y=%d\n",x,y);
}
void f5_5(int n){
    for (int i = n-1; i >= 1; i--) {
        n = n+i;
    }
    printf("n = %d\n",n);
}
long f_5_6_1(int p){
    int k;
    long r;
    long f_5_6_2(int);//long f5_6_2()在下面，需要提前说明
    k = p * p;
    r = f_5_6_2(k);
    return r;
}
long f_5_6_2(int q){
    long c = 1;
    for (int i = 1; i <= q; i++) {
        c = c*i;
    }
    return c;
}
void f5_8(int a[],int n){
    int i,index,k,t;
    for (k = 0;k<n-1;k++) {
        index = k;
        for (i = k+1;i<n;i++)
            if(a[i]<a[index])
                index = i;
            t = a[index];
            a[index]=a[k];
            a[k]=t;
    }
}

long f5_7(int n){
    long f;
    if(n < 0)
        printf("输入错误");
    else if (n == 0 || n == 1)
        f = 1;
    else
        f = f5_7(n - 1) * n;
    return f;
}
int f5_9(int array[],int n){
    int k,max;
    max = array[0];
    for(k = 1;k<n;k++)
        if(max < array[k])
            max = array[k];
    return max;
}
int f5_10(int m){
    int k,n,res;
    if(m==1)
        return 0;
    res=1;
    n=(int)sqrt(m);
    for ( k = 2; k <= n; k++)
        if (m%k==0)
        {
            res = 0;
            break;
        }
    return res;
}
double f5_11(double x,int num){
    if (num == 0)
        return 1.0;
    else if(num == 1)
        return x;
    else
        return (2*x*f5_11(x,num-1)-f5_11(x,num-2));
}
int main() {
    /*5-1*/
//    float number1,number2;
//    printf("请输入数字:");
//    scanf("%f",&number1);
//    number2 = f5_1(number1);
//    printf("number2:%f\n",number2);

    /*5-2*/
//    double number3 = 564.5341;
//    printf(" sqrt(number3) = %lf\n",sqrt(number3));

    /*5-3*/
//    int number4,number5,number6;
//    printf("请输入number4和number5：");
//    scanf("%d%d",&number4,&number5);
//    number6 = f5_3(number4,number5);
//    printf("number6:%d\n",number6);

    /*5-4*/
//    int number7 = 2,number8 = 3;
//    printf("number7 = %d,number8 = %d\n",number7,number8);
//    f5_4(number7,number8);
//    printf("number7 = %d,number8 = %d\n",number7,number8);

    /*5-5*/
//    int number9;
//    printf("请输入number9：");
//    scanf("%d",&number9);
//    f5_5(number9);
//    printf("number9 = %d",number9);

    /*5-6*/
//    long number10;
//    for (int i = 2; i <= 3 ; i++) {
//        number10 = number10 + f_5_6_1(i);
//    }
//    printf("\nnumber10 = %ld\n",number10);

    /*5-7*/
//    int number11;
//    long number12;
//    printf("请输入number11:");
//    scanf("%d",&number11);
//    number12 = f5_7(number11);
//    printf("number11(%d) **  = number12(%ld)  ",number11,number12);

    /*5-8*/
//    int array1[]={23,54,24,6,12,89,46,47,88,76};
//    f5_8(array1,10);
//    for (int i = 0; i < 10; i++) {
//        printf("array[%d] = %d\t",i,array1[i]);
//    }

    /*5-9*/
//    int number13,number14;
//    int array[MAXNUM];
//    number13 = 0;
//    number14 = 54;
//    while (number13 < MAXNUM && number14>=0&&number14<=100){
//        array[number13++] = number14;
//        scanf("%d",&number14);
//    }
//    if(number13>0)
//        printf("最大：%d\n", f5_9(array,number13));
//    else
//        printf("无最大");

    /*5-10*/
//    int number14;
//    printf("输入number14：");
//    scanf("%d",&number14);
//    while (number14 > 0){
//        if (f5_10(number14))
//            printf("f5_10() :%d\n",number14);
//        scanf("%d",&number14);
//    }

    /*5-11*/
    double number15;
    printf("number15: ");
    scanf("%lf",&number15);
    for (int i = 0; i < 10; i++) {
        printf("%lf\t", f5_11(number15,i));
    }
    printf("\n");


    return 0;
}
