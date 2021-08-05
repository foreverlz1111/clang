#include "stdio.h"
#include "math.h"
/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/
int main() {
    /*3-2*/
    char alphabet1,alphabet2,alphabet3;
//    alphabet1 = getchar();
//    alphabet2 = getchar();
//    alphabet3 = getchar();
//    putchar(alphabet1);
//    putchar(alphabet2);
//    putchar(alphabet3);

    /*3-3*/
//    int number_year;
//    printf("请输入年份：");
//    scanf("%d",&number_year);
//    if(number_year % 400 ==0 || number_year&4==0 && number_year%100!=0)
//        printf("%d年是润年\n",number_year);
//    else
//        printf("%d年不是润年\n",number_year);

    /*3-4*/
//    printf("请分别输入数字1，数字2：");
//    float number1,number2,number3;
//    scanf("%f%f",&number1,&number2);
//    if (number1 > number2){
//        number3 = number1;
//        number1 = number2;
//        number2 = number3;
//    }
//    printf("数字1 = %.2f，数字2 = %.2f\n",number1,number2);

    /*3-5*/
//    float number4;
//    printf("请输入数字4：");
//    scanf("%f",&number4);
//    if(number4 < 0)
//        number4 = -number4;
//    printf("|number4| = %.2f\n",number4);

    /*3-6*/
//    int number5;
//    printf("请输入数字5：");
//    scanf("%d",&number5);
//    if (number5%7 == 0)
//        printf("number5=%d,能被7整除\n",number5);
//    else
//        printf("number5=%d,不能被7整除\n",number5);

    /*3-7*/
//    float number6;
//    int number7;
//    printf("请输入数字6：");
//    scanf("%f",&number6);
//    if (number6 < 0)
//        number7 = -1;
//    else
//        number7 = 1;
//    printf("number7 = %d",number7);

    /*3-8*/
//    float number8;
//    int number9;
//    printf("请输入数字8：");
//    scanf("%f",&number8);
//    if(number8 < 0)
//        number9 = -1;
//    else if (number8 == 0)
//        number9 = 0;
//    else
//        number9 = 1;
//    printf("number9 = %d\n",number9);

    /*3-9 + 3-10*/
//    int number10;
//    printf("请输入成绩：");
//    scanf("%d",&number10);
//    printf("成绩 = %d:",number10);
//    switch (number10/10) {
//        case 10:
//        case 9:
//            printf("A\n");break;
//        case 8:
//            printf("B\n");break;
//        case 7:
//            printf("C\n");break;
//        case 6:
//            printf("D\n");break;
//        default:
//            printf("E\n");
//    }
        /*3-11*/
//    int number11,number12,number13;
//    printf("请输入年份、月份: ");
//    scanf("%d%d",&number11,&number12);
//    switch (number12) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:number13 = 31;
//            printf("该月有%d天\n",number13);break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:number13 = 30;
//            printf("该月有%d天\n",number13);break;
//        case 2:
//            if (number11%4 == 0 && number11%100 != 0 || number11%400 == 0)
//                number13 = 29;
//            else
//                number13 = 28;
//            printf("该月有%d天\n",number13);break;
//        default:
//            printf("输入月份不合规，请输入1～12\n");
//    }

    /*3-12*/
//    int number14,number15;
//    number14 = 1;
//    number15 = 0;
//    while (number14 <= 5){
//        number15 += number14;
//        number14++;
//    }
//    printf("number15(sum) = %d\n",number15);

    /*3-13*/
//    int number16,number17,number18;
//    number16 = 1;
//    printf("请输入number17的值：");
//    scanf("%d",&number17);
//    number18 = 0;
//    while (number16 <= number17){
//        if (number16%2 == 0)
//            number18 += number16;
//        number16++;
//    }
//    printf("number18 = %d\n",number18);


    /*3-14*/
//    int number19,number20;
//    number19 = 10;
//    number20 = 1;
//    while (number19 >= 1){
//        number20 *= number19;
//        number19--;
//    }
//    printf("10*  =  %d \n", number20);

    /*3-15*/
//    int number21,number22;
//    number21 = 10;
//    number22 = 1;
//    do {
//        number22 *= number21;
//        number21--;
//    } while (number21 >= 1);
//    printf("10*  =  %d\n",number22);

    /*3-16*/
//    int number23;
//    number23 = 5;
//    do {
//        if (number23%7 == 5 && number23%5 == 3 && number23%3 ==2)
//            printf("%d符合 number23%7 == 5 && number23%5 == 3 && number23%3 ==2 的条件\n",number23);
//        number23++;
//    } while (number23 <= 500);

    /*3-18*/
//    int number24,number25;
//    number25 = 0;
//    for (number24 = 1;number24 <= 5;number24++)
//        number25 += number24;
//    printf("number25 = %d\n",number25);

    /*3-19*/
//    int number26,number27,number28,number29;
//    for (number26 = 100; number26 <= 999 ; number26++) {
//        number29 = number26/100;
//        number28 = (number26-number29*100)/10;
//        number27 = number26%10;
//        if (pow(number29,3) + pow(number28,3) + pow(number27,3) == number26)
//            printf("number26 = %d\n",number26);
//    }

    /*3-20*/
//    int number30;
//    printf("x_sqrt: \n");
//    for (number30 = 5; number30 <= 100; number30++) {
//        printf("%-7d\t%5.2f\n", number30,sqrt(number30));
//    }

    /*3-21*/
//    int number31 = 0;
//    printf("请输入字符：");
//    loop : if(getchar()!='\n'){
//        number31++;
//        goto loop;
//    }
//    printf("字符个数为%d",number31);

    /*3-22 输入任意正整数，判断是否为素数。*/
//    int number32,number33,number34=1;
//    printf("请输入number33的值：");
//    scanf("%d",&number33);
//    if (number33 > 1){
//        for (number32 = 2; number32 <= number33-1; number32++) {
//                if(number33 % number32 == 0){
//                    number34 = 0;
//                    break;
//                }
//        }
//        if (number34 == 1)
//            printf("%d是素数\n",number33);
//        else
//            printf("%d不是素数\n",number33);
//    } else if (number33 == 1)
//        printf("%d不是素数\n",number33);
//    else
//        printf("范围有不合规");

    /*3-23*/
//    int number_score,number_max = -1,number_min = 101,number_n;
//    for (number_n = 1; number_n <= 10; number_n++) {
//        scanf("%d",&number_score);
//        if (number_score > number_max)
//            number_max = number_score;
//        if (number_score < number_min)
//            number_min =number_score;
//    }
//    printf("max = %d, min = %d\n",number_max,number_min);
//    printf("");

    /*3-24*/
//    for (int i = 1; i <= 5; i++) {
//        for (int j = 1; j <= 6-i ; j++)
//            printf(" ");
//        for (int k = 1; k <= 2*i-1 ; k++)
//            printf("*");
//        printf("\n");
//    }

    /*3-25*/
//    int number35,number36,number37 = 0;
//    for ( number35 = 3; number35 <= 100 ; number35 += 2) {
//        for (number36 = 2;number36 <= sqrt(number35);number36++)
//        {
//            if (number35 % number36 == 0)
//                break;
//        }
//        if (number36 > sqrt(number35)){
//            printf("%5d",number35);
//            number37++;
//            if (number37%5 == 0)
//                printf("\n");
//        }
//    }
//    printf("\n");

    /*3-26*/
//    int number_cock,number_hen,number_chick;
//    for (number_cock = 1;number_cock <= 98;number_cock++)
//        for (number_hen = 1;number_hen <= 98;number_hen++){
//            number_chick = 100-number_cock-number_hen;
//            if (number_cock*5 + number_hen*3 + number_chick/3.0 == 100)
//                printf("鸡翁：%d只，母鸡：%d只，鸡雏：%d只 \n",number_cock,number_hen,number_chick);
//        }

    /*3-27 求一元二次方程ax2+bx+c=0的实根*/
//    float number38,number39,number40,number41,number42,number43;//a,b,c,delta,x1,x2
//    printf("分别输入number38,number39,number40 (a,b,c) :");
//    scanf("%f%f%f",&number38,&number39,&number40);
//    if (fabs(number38) <= 1e-6)
//        printf("不是一个一元二次方程\n");
//    else
//    {
//        number41 = number39 * number39 - 4 * number38 * number40;
//        if (fabs(number41) <= 1e-6)
//            printf("有两个相同的实数根：%8.4f\n",-number39/(2*number38));
//        else
//            if (number41 > 1e-6){
//                number42 = (-number39+sqrt(number41))/(2*number38);
//                number43 = (-number39-sqrt(number41))/(2*number38);
//                printf("有两个不相同的实数根：%8.4f,%8.4f\n",number42,number43);
//            } else{
//                printf("没有实数根\n");
//            }
//    }
    
    return 0;
}
