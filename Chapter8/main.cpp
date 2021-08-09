#include <stdio.h>

/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

int number11,number12;//max min
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
void f8_9(int *x,int n){
    int *p,temp,*i,*j,m=(n-1)/2;
    i=x;
    j=x+n-1;
    p=x+m;
    for(;i<=p;i++,j--){
        temp = *i;
        *i = *j;
        *j = temp;
    }
}
void f8_10(int *p1,int n){
    int *p,i;
    p = p1;
    number11 = number12 = *p;
    for(p=p+1,i = 1;i<n;i++,p++){
        if (*p>number11)
            number11 = *p;
        else if(*p<number12)
            number12 = *p;
    }
}
void f8_19(char *p1,char *p2){
    while (*p1!='\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2=*p1;
}
int f8_20(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}
int f8_21_fun(int(*p)(int,int),int  a,int b){
    int c;
    c = (*p)(a,b);
    return c;
}
int f8_21_add(int a,int b){
    return (a+b);
}
int f8_21_sub(int a,int b){
    return (a-b);
}
int f8_21_mul(int a,int b){
    return (a*b);
}
int f8_21_div(int a,int b){
    return (a/b);
}
char *f8_22(int n){
    static char *name[]={"error","一月","二月","三月","四月" ,"五月" ,"六月", "七月",
                         "八月", "九月" ,"十月", "十一月" ,"十二月"};
    return ((n<1||n>12)?name[0]:name[n]);
}
char *f8_24(char *name[],int n){
    return ((n<1||n>12)?name[0]:name[n]);
}
void f8_29(int m,int n,int *sum,int *p){
    *sum = n+n;
    *p = m*n;
}
int f8_31(char *s){
    int i;
    for (i = 0; *s++;i++) ;
        return i;
}
char *f8_32(char *s){
    char *ps;
    ps = s;
    while (*ps){
        if(*ps>='a'&&*ps<='z')
            *ps = *ps-32;
        ps++;
    }
    return s;
}
int f8_33(char *s,char c){
    int k = 0;
    while (*s){
        if(*s==c)
            k++;
        s++;
    }
    return k;
}
int f8_34(char *str,char *substr){
    int num = 0,k;
    for (int i = 0; str[i] != '\0' && num == 0; i++) {
        for (int j = i,k = 0; substr[k] == str[j] ; j++,k++) {
            if (substr[k+1]=='\0'){
                num = 1;
                break;
            }
        }
    }
    return num;
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
//    float array3[]={2,14,5,7,11},*point_array3,number10;
//    point_array3 = array3;
//    number10 = f8_8(point_array3,5);
//    printf("average array3[] = %lf\n",number10);

    /*8-9*/
//    int array4[]={1,2,3,4,5,6,7,8,9,0},*point_array4;
//    point_array4 = array4;
//    for (int i = 0; i < 10; ++i) {
//        printf("原  array4[%d] = %d\n",i,array4[i]);
//    }
//    f8_9(array4,10);
//    for (int i = 0; i < 10; ++i) {
//        printf("修改后  array4[%d] = %d\n",i,array4[i]);
//    }

    /*8-10*/
//    int array5[]={1,2,3,4,5,6,7,8,9,0},*point_array5;
//    point_array5 = array5;
//    f8_10(point_array5,10);
//    printf("point_array5最大值、最小值为：%d,%d",number11,number12);

    /*8-11*/
//    int array6[2][3]={1,2,3,
//                      4,5,6,};
//    printf("array6\t*array6\t&array6\tarray6[0]\t&array6[0]\tarray6[0][0]:\n%d\t%d\t%d\t%d\t%d\t\n",array6,*array6,&array6,array6[0],&array6[0][0]);
//    printf("array6+1\t*(array6+1)\tarray6[1]\t&array6[1]\t&array6[1][0]:\n%d\t%d\t%d\t%d\t%d\t\n",array6+1,*(array6+1),array6[1],&array6[1],&array6[1][0]);
//    printf("array6+2\t*(array6+2)\tarray6[2]\t&array6[2]\t&array6[2][0]:\n%d\t%d\t%d\t%d\t%d\t\n",array6+2,*(array6+2),array6[2],&array6[2],&array6[2][0]);

    /*8-12*/
//    int array7[2][3]={1,2,3,
//                      4,5,6,};
//    int (*point_array7)[3];
//    point_array7 = array7;
//    for (int i = 0; i < 2; i++,point_array7++) {
//        printf("%d\t",point_array7);
//    }

    /*8-13*/
//    int array8[2][3]={1,2,3,
//                      4,5,6,};
//    int (*point_array8)[3];
//    point_array8 = array8;
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            printf("point_array8+i+j = %d\t",*(*(point_array8+i)+j));
//        }
//        printf("\n");
//    }

    /*8-14*/
//    int array9[2][3]={1,2,3,
//                      4,5,6,};
//    int (*point_array9)[3];
//    point_array9 = array9;
//    int number13 = **point_array9,number14 = **point_array9,number15,number16,number17,number18;//max,min,maxi,maxj,mini,minj
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            if ( *(*(point_array9+i)+j) >= number13){
//                number13 = *(*(point_array9+i)+j);
//                number15 = i;
//                number16 = j;
//            }
//            if ( *(*(point_array9+i)+j) <= number14){
//                number14 = *(*(point_array9+i)+j);
//                number17 = i;
//                number18 = j;
//            }
//        }
//    }
//    printf("array9[%d][%d] = %d 最大\n",number15,number16,number13);
//    printf("array9[%d][%d] = %d 最小\n",number17,number18,number14);

    /*8-15*/
//    char *point_array10,array10[20]={"Clang"};
//    point_array10 = array10;
//    printf("%s\n",point_array10);

    /*8-16*/
//    char *point_array11,array11[20]={"Clang"};
//    point_array11 = array11;
//    while (*point_array11 != '\0'){
//        printf("%c\n",*point_array11);
//        *point_array11++;
//    }

    /*8-18*/
//    char *point_array12,array12[20]={"Clang example"};
//    int number19 ,number20= 0;//i,ncount
//    point_array12 = array12;
//    while (*point_array12 != '\0'){
//        if (*point_array12 == ' ')
//            point_array12++;
//        else{
//            number20++;
//            number19 = 0;
//            while (*(point_array12+number19) != ' '&& *(point_array12+number19) != '\0')
//                number19++;
//            point_array12+=number19;
//        }
//    }
//    printf("句子有%d个单词\n",number20);

    /*8-19*/
//    char *point_array13_1="Clang example",*point_array13_2,array13[100];
//    point_array13_2 = array13;
//    f8_19(point_array13_1,point_array13_2);
//    printf("原字符串：%s\n",point_array13_1);
//    printf("复制字符串：%s\n",point_array13_2);

    /*8-20*/
//    int (*point_f8_20)(int,int);
//    point_f8_20 = f8_20;
//    int number21 = 9,number22 = 12,number23;//x,y,z
//    number23 = (*point_f8_20)(number21,number22);
//    printf("point_f8_20 返回输入最大值为：%d",number23);

    /*8-21*/
//    int number24 = 24,number25 = 6;
//    printf("%d+%d=%d\n",number24,number25,f8_21_fun(f8_21_add,number24,number25));
//    printf("%d-%d=%d\n",number24,number25,f8_21_fun(f8_21_sub,number24,number25));
//    printf("%dx%d=%d\n",number24,number25,f8_21_fun(f8_21_mul,number24,number25));
//    printf("%d/%d=%d\n",number24,number25,f8_21_fun(f8_21_div,number24,number25));

    /*8-22*/
//    int number26 = 5;
//    printf("对应月份为：%s\n", f8_22(number26));

    /*8-24*/
//    char *name[]={"error","一月","二月","三月","四月" ,"五月" ,"六月", "七月",
//                  "八月", "九月" ,"十月", "十一月" ,"十二月"};
//    int number27 = 11;
//    printf("对应月份为：%s\n", f8_24(name,number27));

    /*8-25*/
//    int array14[][3] = {1,1,1,
//                      1,1,1};
//    int array15[][2] = {1,1,
//                        1,1,
//                        1,1};
//    int array16[2][2];
//    int *point_array14_15_16[3];
//    point_array14_15_16[0] = array14[0];
//    point_array14_15_16[1] = array15[0];
//    point_array14_15_16[2] = array16[0];
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            array16[i][j] = 0;
//            for (int k = 0; k < 3; k++) {
//                array16[i][j]+=(*(point_array14_15_16[0]+3*i+k)*(*(point_array14_15_16[1]+2*k+j)));
//            }
//        }
//    }
//    printf("输出结果:");
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            printf("%d\t",*(point_array14_15_16[2]+2*i+j));
//        }
//        printf("\n");
//    }

    /*8-27*/
//    static int array17[]={5,8,12,3,6};
//    int *point_array17[5]={&array17[0],&array17[1],&array17[2],&array17[3],&array17[4]};
//    int **point_point_array17;
//    point_point_array17 = point_array17;
//    for (int i = 0; i < 5; i++) {
//        printf("point_point_array17 = %d\n",**point_point_array17);
//        point_point_array17++;
//    }

    /*8-28*/
//    char *point_array18[] = {"ch","cn","china"};
//    char **point_point_array18 ;
//    for (int i = 0; i < 3; i++) {
//        point_point_array18 = point_array18+i;
//        printf("point_point_array18 = %s\n",*point_point_array18);
//    }

    /*8-29*/
    int number28 = 9,number29 = 7,number30,number31;//m,n,sum,p
    f8_29(number28,number29,&number30,&number31);
    printf("number28,number29,&number30,&number31 = %d\t%d\t%d\t%d\n",number28,number29,number30,number31);

    /*8-30*/
//    char array19[] = "CLang2021",array20[20];
//    char *point_array19 = array19;
//    int number32 = 0;
//    while (*point_array19 != '\0'){
//        if (*point_array19 >='0' && *point_array19 <= '9'){
//            array20[number32] = *point_array19;
//            number32++;
//        }
//        point_array19++;
//
//    }
//    printf("array20 = %s",array20);

    /*8-31*/
//    char array21[] = {"Clang2021"};
//    printf("array21 length = %d\n", f8_31(array21));

    /*8-32*/
//    char array22[] = {"2021ClanG"};
//    printf("转换前：%s\n",array22);
//    printf("转换后：%s\n", f8_32(array22));

    /*8-33*/
//    char array23[] = {"2021ClanG"};
//    char alphabet1 = 'a';
//    printf("alphabet1 在 array23[] 出现次数: %d\n", f8_33(array23,alphabet1));

    /*8-34*/
    char array24[] = {"2021 Clang"};
    char array25[] = {"Clang"};
    if (!f8_34(array24,array25))
        printf("%s 出现过\n",array25);
    else
        printf("%s 没出现过\n",array25);

    return 0;
}
