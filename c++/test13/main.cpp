#include <iostream>

#include<stdio.h>
#include<memory.h>
#include<string.h>
#include<stdlib.h>
using  namespace std;

int arr[8];    //范围为 -128 ~ +127

void Complement(int number)    //求负数补码
{
    //int number_0 = number;  //记录当前负数
    number = abs(number);    //取绝对值
    int i = 7;
    while (number != 0) //求出其绝对值原码
    {
        arr[i] = number % 2;
        i--;
        number /= 2;
    }
    for (i = 7; i >= 0; i--) {
        if (arr[i] == 1) {
            int j;
            for (j = 0; j < i; j++)    //取反
                if (arr[j] == 1)
                    arr[j] = 0;
                else
                    arr[j] = 1;
            break;
        }
    }

    for (i = 0; i <= 7; i++)
        printf("%d", arr[i]);
    printf("\n");
    memset(arr, 0, sizeof(arr));    //重置数组
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    int time =3849;//second
//    int hh;
//    int mm;
//    int ss;
//    hh = time/60/60;
//    mm = time/60 - hh * 60;
//    ss = time - hh * 60*60  - mm * 60;
//    std::cout <<hh<<":"<<mm<<":"<<ss<< std::endl;


//    for(int i =0;i<10;i++){
//        printf("%d\n",i);
//    }

//int mylength = 10;
//    int k = 0;
//    while (k < 10){
//        printf("%d\n",k);
//        k++;
//        if (k == 6)
//            break;
//    }

//  源码 反码 补码
    int i ;
    scanf("%d",&i);
    Complement(i);//反码
    return 0;
}
