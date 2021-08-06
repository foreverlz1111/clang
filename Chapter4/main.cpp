#include "stdio.h"

/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

int main() {
    /*4-1*/
//    float array1[10],number1 = 0,number2;//score[10],sum,ave;
//    printf("请输入10位学生的数学成绩：\n");
//    for (int i = 0; i < 10; i++) {
//        printf("第%d位学生：",i+1);
//        scanf("%f",&array1[i]);
//    }
//    for (int i = 0; i < 10; i++)
//        number1 += array1[i];
//    number2 = number1 / 10;
//    printf("10位学生的成绩为：\n");
//    for (int i = 0; i < 10; i++)
//        printf("%f\t",array1[i]);
//    printf("\n");
//    printf("10位学生的平均成绩为：%.2f \n",number2);

    /*4-2*/
//    int array2[30] = {1,1};
//    for (int i = 2; i < 30; i++) {
//        array2[i] = array2[i-2] + array2[i-1];
//    }
//    printf("前30个Fibonacci数列为：\n");
//    for (int i = 0; i < 30; i++) {
//        if (i%5 == 0)printf("\n");
//        printf("%-8d\t",array2[i]);
//    }

    /*4-3*/
//    float array3[5] = {5,23,8,12,6},number3;
//    printf("输入5个元素{5,23,8,12,6}\n");
//    for (int i = 0; i < 4; i++) {
//        for (int j = i+1; j < 5; j++) {
//            if (array3[i] > array3[j]){
//                number3 =array3[i];
//                array3[i] = array3[j];
//                array3[j] = number3;
//            }
//        }
//    }
//    printf("排序结果：");
//    for (int i = 0; i < 5; i++) {
//        printf("%.0f\t",array3[i]);
//    }

    /*4-3优化*/
//    int number4;
//    float array4[5] = {5,23,8,12,6},number5;
//    printf("输入5个元素{5,23,8,12,6}\n");
//    for (int i = 0; i < 4; i++) {
//        number4 = i;
//        for (int j = i+1; j < 5; j++) {
//            if (array4[i] > array4[j])
//                number4 = j;
//        }
//        if (i != number4){
//            number5 = array4[i];
//            array4[i] = array4[number4];
//            array4[number4] = number5;
//        }
//    }
//        printf("排序结果：");
//        for (int i = 0; i < 5; i++) {
//            printf("%.0f\t",array4[i]);
//        }

    /*4-3冒泡排序*/
//    int array5[5]= {5,23,8,12,6},number6;
//    printf("输入5个元素{5,23,8,12,6}\n");
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4 - i; j++) {
//            if (array5[j] > array5[j+1]){
//                number6 = array5[j];
//                array5[j] = array5[j+1];
//                array5[j+1] = number6;
//            }
//        }
//    }
//    printf("排序结果：");
//    for (int i = 0; i < 5; i++) {
//        printf("%.0d\t",array5[i]);
//    }

    /*4-4*/
    int array6[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j || i+j ==4)
                array6[i][j] = 1;
            else
                array6[i][j] = 2;
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("array[%d][%d] = %d\t",i,j,array6[i][j]);
        }
        printf("\n");
    }


    return 0;
}
