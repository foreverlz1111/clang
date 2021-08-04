#include "stdio.h"

#define PI 3.14//实体常量定义
int main() {
    /*2-1*/
    float r,l;
    r = 7.0;
    l = 2* PI * r;
    printf("周长=%f\n",l);//书本结果43.960000，编译结果43.959999

    /*2-2*/
    int number1,number2,number3,number4;
    unsigned number_u;
    number1 = 10;
    number2 = -20;
    number_u= 30;
    number3 = number1 + number_u;
    number4 = number2 + number_u;
    printf("number1 + number_u = %d, number2 + number_u = %d\n",number3,number4);

    /*2-3*/
    int number5,number6;
    number5 = 2147483647;
    number6 = number5 + 1;
    printf("number5 = %d,number6 = %d\n",number5,number6);
    number5 = -2147483648;
    number6 = number5 - 1;
    printf("number5 = %d,number6 = %d\n",number5,number6);

    /*2-4*/
    float number7,number8;
    number7 = 333333.222e5;
    number8 = number7 + 30;
    printf("number7 = %f;\n",number7);
    printf("number8 = %f;\n",number8);

    /*2-5*/
    int number9,number10,number11;
    number9 = 5;
    number10 = 6;
    number11 = 7;
    printf("   aB.   c\tde\rf\n");
    printf("hijk\tL\bM\n");

    /*2-6*/
    char alphabet1,alphabet2;
    alphabet1 = 120;
    alphabet2 = 121;
    printf("%c,%c\n",alphabet1,alphabet2);
    printf("%d,%d\n",alphabet1,alphabet2);

    /*2-7*/
    int number_i = 7;
    printf("++number_i = %d\n",++number_i);//加1后输出
    printf("--number_i = %d\n",--number_i);//减1后输出
    printf("number_i++ = %d\n",number_i++);//输出后再加1
    printf("number_i-- = %d\n",number_i--);//输出后再减1
    printf("-number_i++ = %d\n",-number_i++);//输出后再加1
    printf("-number_i-- = %d\n",-number_i--);//输出后再减1

    /*2-8*/
    int number12 = 2,number13 = 3,number14;
    number14 = -(number12++);
    number14 = number14 + 6 / ++number13;
    printf("number14= %d\n",number14);

    /*2-9*/
    int number15,number16 = 322;
    float number17,number18 = 8.88;
    char alphabet3 = 'k',alphabet4;
    number15 = number18;
    number17 = number16;
    number15 = alphabet3;
    alphabet4 = number16;
    printf("number15 = %d,number17 = %f,number15 = %d,alphabet4 = %c\n",number15,number17,number15,alphabet4);

    /*2-10*/
    int number19 = 2,number20 = 4,number21 = 6,number22,number23;
    number23 = (number22 = number19 + number20),(number20 + number21);
    printf("number23 = %d,number22 = %d \n",number23,number22);
    printf("(number19,number20,number21+number19) = %d\n,number20 = %d ,number21 = %d\n",(number19,number20,number21+number19),number20,number21);

    /*2-11*/
    int number24,number25;
    number24 = 127;
    number25 = number24 >> 3;
    printf("number24 = %d\t number25 = %d \n",number24,number25);
    number25 = number25 * 9 ;
    printf("number24 = %d\t number25 = %d \n",number24,number25);

    /*2-12*/
    char alphabet5 = 'a',alphabet6 = 'b';
    int number26,number27,number28;
    number26 = alphabet5;
    number26 = (number26 << 2)|alphabet6;
    number28 = number26&0xff;
    number27 = (number26 & 0xff00) >> 8;
    printf("alphabet5 = %d\t alphabet6 = %d\n number27 = %d\t number28 = %d\n",alphabet5,alphabet6,number27,number28);
    return 0;
}
