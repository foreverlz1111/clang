#include <stdio.h>

/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

#define R 3.0
#define PI 3.14159
#define L 2*PI*R
#define S PI*R*R

#define CT(R) 2*PI*R
#define CS(R) PI*R*R

//R,L,S,V
#define CIRCLE(CIRCLE1,CIRCLE2,CIRCLE3,CIRCLE4) \
CIRCLE2=2*PI*(CIRCLE1);CIRCLE3=PI*(CIRCLE1)*(CIRCLE1);CIRCLE4=4.3/3.0*PI*(CIRCLE1)*(CIRCLE1)*(CIRCLE1)

#define LETTER 1

#define MAXINPUT(INPUT1,INPUT2,INPUT3,MAXOUTPUT) MAXOUTPUT=INPUT1>INPUT2?INPUT1:INPUT2;MAXOUTPUT=MAXOUTPUT>INPUT3?MAXOUTPUT:INPUT3

#define PDCH(C) C=(C>='A'&&C<='z')?1:0
int main() {
    /*7-2*/
    printf("L = %f\nS = %f\n",L,S);

    /*7-3*/
    float number1,number2,number3;//r,t,s
    printf("输入number1 :");
    scanf("%f",&number1);
    number2 = CT(number1);
    number3 = CS(number1);
    printf("CT = %f\nCS = %f\n",number2,number3);

    /*7-4*/
    float number4,number5,number6,number7;//r,l,s,v
    printf("请输入number4 ： ");
    scanf("%f",&number4);
    CIRCLE(number4,number5,number6,number7);
    printf("number4=%6.2f,number5=%6.2f,number6=%6.2f,number7=%6.2f\n",number4,number5,number6,number7);

    /*7-5*/
    char array1[20]="ClanG",alphabet1;
    int number8 = 0;//i
    while ((alphabet1 = array1[number8]) != '\0'){
        number8++;
#if LETTER
        if (alphabet1 >= 'a' && alphabet1 <='z')
            alphabet1 = alphabet1 - 32;
#else
        if (alphabet1 >= 'A' && alphabet1 <='Z')
            alphabet1 = alphabet1 + 32;
#endif
        printf("alphabet1 = %c\n",alphabet1);
    }

    /*习题二、1*/
    int number9 = 13,number10 = 8,number11 = 9,number12;//input1\2\3,maxoutput
    MAXINPUT(number9,number10,number11,number12);
    printf("[%d]\t[%d]\t[%d]\t >>>> [%d] \n",number9,number10,number11,number12);

    /*习题二、4*/
    char alphabet2 = 'K';
    printf("alphabet2 >>>>  %d", PDCH(alphabet2));

    return 0;
}
