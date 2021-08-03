#include <stdio.h>

/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

//1972研发————1978年C标准诞生。

//C99标准所有C程序从main()开始。
int main() {
    //1-1
    printf("好久不见！\n");
    printf("近来可好？\n");

    //1-2
    int number1 ,number2,number_sum;
    printf("请输入数字1和数字2的值： ");
    scanf("%d%d",&number1,&number2);//列14
    number_sum = number1 * number1 + number2 * number2;
    printf("平方和是：  %d",number_sum);

    //所有C程序从main()结束。
    return 0;

}
