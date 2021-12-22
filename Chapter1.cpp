#include <stdio.h>

#include "math.h"
/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

/*1972研发————1978年C标准诞生。*/

/*C99标准所有C程序从main()开始。*/
int main() {
    /*1-1*/
    printf("hello \n");
    printf("world!\n");

    /*1-2*/
    int number1 ,number2,number_sum;
    printf("请输入数字1和数字2的值： ");
    scanf("%d,%d",&number1,&number2);//列14的','表示输入数字之间要有一个‘，’否则无法识别数字
    number_sum = number1 * number1 + number2 * number2;
    printf("平方和是：  %d\n",number_sum);

    /*1-3*/
    int number3,number4;
    float number_average;
    float average(int num1,int num2);//对average函数进行定义，因为函数声明在主调函数之后，如果出现在主调函数之前则无需声明
    printf("请输入数字1和数字2的值： ");
    scanf("%d,%d",&number3,&number4);
    number_average = average(number3,number4);
    printf("(%d+%d)/2.0=%f\n",number3,number4,number_average);

    /*习题：三、4（圆柱体积）*/
    float v;
    int r,h;
    printf("分别输入半径，高度。（单精度）");
    scanf("%d,%d",&r,&h);
    v = 3.14 * pow(r,2) * h;
    printf("圆柱的体积为：%f\n",v);

    return 0;
/*所有C程序从main()结束。*/
}

/*函数首部（函数类型，函数名，参数类型，参数名）和函数体（大括号内）构成*/
float average(int num1,int num2)
{
    int tmp_tol = num1 + num2;
    float tmp_ave ;
    tmp_ave = tmp_tol / 2.0;
    /*  tmp_ave = tmp_tol / 2.0; == tmp_ave = tmp_tol / 2;  */
    return tmp_ave;
}
