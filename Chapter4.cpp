#include <cstring>
#include "stdio.h"

#include "string"

#include "math.h"
/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

int main() {
    /*4-1*/
    float array1[10],number1 = 0,number2;//score[10],sum,ave;
    printf("请输入10位学生的数学成绩：\n");
    for (int i = 0; i < 10; i++) {
        printf("第%d位学生：",i+1);
        scanf("%f",&array1[i]);
    }
    for (int i = 0; i < 10; i++)
        number1 += array1[i];
    number2 = number1 / 10;
    printf("10位学生的成绩为：\n");
    for (int i = 0; i < 10; i++)
        printf("%f\t",array1[i]);
    printf("\n");
    printf("10位学生的平均成绩为：%.2f \n",number2);

    /*4-2*/
    int array2[30] = {1,1};
    for (int i = 2; i < 30; i++) {
        array2[i] = array2[i-2] + array2[i-1];
    }
    printf("前30个Fibonacci数列为：\n");
    for (int i = 0; i < 30; i++) {
        if (i%5 == 0)printf("\n");
        printf("%-8d\t",array2[i]);
    }

    /*4-3*/
    float array3[5] = {5,23,8,12,6},number3;
    printf("输入5个元素{5,23,8,12,6}\n");
    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 5; j++) {
            if (array3[i] > array3[j]){
                number3 =array3[i];
                array3[i] = array3[j];
                array3[j] = number3;
            }
        }
    }
    printf("排序结果：");
    for (int i = 0; i < 5; i++) {
        printf("%.0f\t",array3[i]);
    }

    /*4-3优化*/
    int number4;
    float array4[5] = {5,23,8,12,6},number5;
    printf("输入5个元素{5,23,8,12,6}\n");
    for (int i = 0; i < 4; i++) {
        number4 = i;
        for (int j = i+1; j < 5; j++) {
            if (array4[i] > array4[j])
                number4 = j;
        }
        if (i != number4){
            number5 = array4[i];
            array4[i] = array4[number4];
            array4[number4] = number5;
        }
    }
        printf("排序结果：");
        for (int i = 0; i < 5; i++) {
            printf("%.0f\t",array4[i]);
        }

    /*4-3冒泡排序*/
    int array5[5]= {5,23,8,12,6},number6;
    printf("输入5个元素{5,23,8,12,6}\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (array5[j] > array5[j+1]){
                number6 = array5[j];
                array5[j] = array5[j+1];
                array5[j+1] = number6;
            }
        }
    }
    printf("排序结果：");
    for (int i = 0; i < 5; i++) {
        printf("%.0d\t",array5[i]);
    }

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

    /*4-5*/
    int array7[6][6]={2,3,4,6,7,8,
                      5,3,7,9,3,2,
                      12,25,34,21,9,17,
                      23,37,34,21,34,41,
                      12,11,53,42,29,41,
                      56,12,34,25,14,43},number7,number8=0,number9=0;//max,maxi,maxj
                      number7 = array7[0][0];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (fabs(number7) < fabs(array7[i][j])){
                number7 = array7[i][j];
                number8 = i;
                number9 = j;
            }
        }
    }
    printf("array7[%d][%d]=%d 最大\n",number8,number9,number7);

    /*4-6 !!注意Linux/GCC环境无法使用gets()!! */
    char array8[20],alphabet1;
    int number10;//length
    scanf("%[^\n]",&array8);//语句>"gets(array8);"不允许在linux环境中使用
    number10 = strlen(array8);
    for (int i = 0; i < number10/2; i++) {
        alphabet1 = array8[i];
        array8[i] = array8[number10-i-1];
        array8[number10-i-1] = alphabet1;
    }
    puts(array8);

    /*4-7*/
    char array9[60],alphabet2;
    int number11,number12,number13;//letter,digit,others
    number11 = number12 = number13 =0;
    scanf("%[^\n]",&array9);
    for (int i = 0; (alphabet2 = array9[i]) != '\0'; ++i) {
        if ( (alphabet2 >='A'&& alphabet2<='Z') || (alphabet2 >= 'a' && alphabet2 < 'z') )
            number11++;
        else if (alphabet2 >= '0' && alphabet2 <= '9')
            number12++;
        else
            number13++;
    }
    printf("字母%d个，数字%d个，符号%d个\n",number11,number12,number13);

    /*4-8*/
    char array10[60],array11[60],array12[60],array13[60];//str,str1,str2,str3
    printf("array11输入字符串 :");
    scanf("%s",&array11);
    printf("array12输入字符串 :");
    scanf("%s",&array12);
    printf("array13输入字符串 :");
    scanf("%s",&array13);
    strcpy(array10,array11);
    if (strlen(array11) < strlen(array12))
        strcpy(array10,array12);
    if (strlen(array10) < strlen(array13))
        strcpy(array10,array13);
    puts(array10);

    /*习题四-6 strcat原理是把数组str2放在str1后门，输入str1就能得到源str1和源str2的连接*/
    char array14[20]={"hello"},
    array15[20]={"clang"};
    int number14 = strlen(array14) ,number15 = strlen(array15);

    for (int i = 0; i < number15  ; i++) {
        array14[number14+i] = array15[i];
    }
    printf("%s",array14);



    return 0;
}
