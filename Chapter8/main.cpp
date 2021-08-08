#include <stdio.h>

/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/


void f8_4(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
float f8_8(float *p1,int n){
    float ave,s=0;
    for (int i = 0; i < n; i++) {
        s = s + *p1;
        p1++;
    }
    ave = s/n;
    return ave;
}
int main() {
    /*8-1*/
//    int number1,number2,number3;//a、b、c
//    printf("number1,number2,number3指针地址：%d\t%d\t%d\n",&number1,&number2,&number3);

    /*8-2*/
//    int number4,number5;
//    int *point4,*point5;
//    number4 = 11;
//    number5 = 55;
//    point4 = &number4;
//    point5 = &number5;
//    printf("number4,number5 >>>> %d,%d \n",number4,number5);
//    printf("*point4,*point5 >>>> %d,%d \n",*point4,*point5);

    /*8-3*/
//    int number6,number7,*point6,*point7,*point_tmp;
//    number6 = 12;
//    number7 = 15;
//    point6 = &number6;
//    point7 = &number7;
//    if (number6 < number7){
//        point_tmp = point6;
//        point6 = point7;
//        point7 = point_tmp;
//    }
//    printf("number6,number7 >>>> %d,%d \n",number6,number7);
//    printf("max,min >>>> %d,%d \n",*point6,*point7);

    /*8-4*/
//    int number8,number9;
//    int *point8,*point9;
//    point8 = &number8;
//    point9 = &number9;
//    number8 = 12;
//    number9 = 5;
//    printf("number8,number9 原始值：%d\t%d\n",number8,number9);
//    f8_4(point8,point9);
//    printf("number8,number9 执行函数后：%d\t%d\n",number8,number9);

    /*8-6(2\3)*/
//    int array1[10]={4,5,6,8,4,2,4,5,7,1};
//    int *point_array1;
//    point_array1 = array1;
//    for (int i = 0; i < 10; i++) {
//        printf("array1[%d] = %d\t",i,*(array1+i));
//        printf("point_array1[%d] = %d\n",i,*(point_array1+i));
//    }

    /*8-7*/
//    int array2[]={4,5,6,8,4,2,4,5,7,1},*point_array2;
//    point_array2 = array2;
//    for (int i = 0; i < 10; ++i) {
//        printf("point_array2 >>>>%d\n",*(point_array2++));
//    }

    /*8-8*/
    float array3[]={2,14,5,7,11},*point_array3,number10;
    point_array3 = array3;
    number10 = f8_8(point_array3,5);
    printf("average array3[] = %lf\n",number10);


    return 0;
}
