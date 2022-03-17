#include <stdio.h>
#include "stdlib.h"
/****************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git     **
 **  提示：本项目需要自定义结构体”FILELOCATION“信息值为本地文件名       **
 **  注意：使用代码对文件读写结果不易控制，                           **
 **       确认代码与文本内容后才执行程序段                           **
 ***************************************************************/


#define FILELOCATION1 "~/test.txt"

#define FILELOCATION2 "~/a.txt"

#define FILELOCATION3 "~/b.txt"

struct s10_7{
    char name[10];
    int age;
};
int main() {
    /*10_3 键盘输入字符,存入文件*/
//    FILE *file1;
//    char alphabet1;
//    if ((file1= fopen(FILELOCATION1,"w"))==NULL)
//    {
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    while ((alphabet1= getchar())!='\n'){
//        putc(alphabet1,file1);
//    }
//    if (fclose(file1)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }

    /*10-4 将文本文件内容复制到另一个文本文件*/
//    FILE *file2,*file3;
//    char alphabet2;
//    if((file2= fopen(FILELOCATION1,"r"))==NULL){
//                printf("文件打开错误，未找到地址\n");
//                exit(0);
//    }
//    if((file3= fopen(FILELOCATION2,"w"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    while (!feof(file2))
//    {
//        fputc(fgetc(file2),file3);
//    }
//    if (fclose(file2)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }
//    if (fclose(file3)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }

    /*10-5 将两个文件合并为一个新的文件,并输出*/
//    FILE *file4,*file5,*file6;
//    char alphabet3;
//    if((file4= fopen(FILELOCATION1,"r"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    if((file5= fopen(FILELOCATION2,"r"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    if((file6= fopen(FILELOCATION3,"w+"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    while(!feof(file4)){
//        if ((alphabet3= fgetc(file4))!=EOF)
//        {
//            fputc(alphabet3,file6);
//        }
//    }
//    while(!feof(file5)){
//        if ((alphabet3= fgetc(file5))!=EOF)
//        {
//            fputc(alphabet3,file6);
//        }
//    }
//    if (fclose(file4)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }
//    if (fclose(file5)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }
//    rewind(file6);
//    printf("file6 = ");
//    while (!feof(file6)){
//        putchar(fgetc(file6));
//    }
//    printf("\n");

    /*10-6将一个文件中的几个整数分别取出,进行乘2计算并存入另一个文件中*/
//    FILE *file7,*file8;
//    int number1;
//    if((file7= fopen(FILELOCATION1,"r"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    if((file8= fopen(FILELOCATION2,"w"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    while(!feof(file7)){
//        fscanf(file7,"%d",&number1);
//        fprintf(file8,"%d ",number1*2);
//    }
//    if (fclose(file7)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }
//    if (fclose(file8)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }

    /*10-7 将学生信息写入文件需结合10-8运行*/
//    struct s10_7 struction1[5]={
//            {"user1",22},
//            {"user2",21},
//            {"user3",25},
//            {"user4",27},
//            {"user5",24}
//    };
//    FILE *file9;
//    if((file9= fopen(FILELOCATION1,"w"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    for (int i = 0; i < 5; ++i) {
//        fwrite(&struction1[i],sizeof (s10_7),1,file9);
//    }
//    if (fclose(file9)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }

    /*10-8 将学生信息进行读取并显示在屏幕上,需结合10-7运行*/
//    struct s10_7 struction2[5];
//    FILE *file10;
//    int number2;
//    if((file10= fopen(FILELOCATION1,"r"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    for (int i = 0; i < 5; ++i) {
//        fread(&struction2[i],sizeof (s10_7),1,file10);
//        printf("%s\t%d\n--------------------------\n",struction2[i].name,struction2[i].age);
//    }
//    if (fclose(file10)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }

    /*10-9 将文件存放的字符倒序输出*/
//    FILE *file11;
//    if((file11= fopen(FILELOCATION1,"r"))==NULL){
//        printf("文件打开错误，未找到地址\n");
//        exit(0);
//    }
//    for (int i = 0; i < 10; ++i) {
//        fseek(file11,-i,2);
//        putchar(fgetc(file11));
//    }
//    if (fclose(file11)){
//        printf("无法正常关闭文件，强制退出\n");
//        exit(0);
//    }

    /*习题二.1 从已经存在的文件中读取字符并转换成大写,写入另一个文件*/
        FILE *file12,*file13;
        char alphabet4;
        if((file12= fopen(FILELOCATION1,"r"))==NULL){
            printf("文件打开错误，未找到地址\n");
            exit(0);
        }
        if((file13= fopen(FILELOCATION2,"a"))==NULL){
            printf("文件打开错误，未找到地址\n");
            exit(0);
        }
        while(!feof(file12)){
            if ((alphabet4 = fgetc(file12))!=EOF){
                if (alphabet4>='a'&&alphabet4<='z'){
                    alphabet4 = alphabet4-26;
                    fputc(alphabet4,file13);
                }
                else
                    fputc(fgetc(file12),file13);
            }
        }
        for (int i = 0; i < 10; ++i) {
            putchar(fgetc(file13));
     }
            if (fclose(file12)){
                printf("无法正常关闭文件，强制退出\n");
                exit(0);
            }
            if (fclose(file13)){
                printf("无法正常关闭文件，强制退出\n");
                exit(0);
            }

    return 0;
}
