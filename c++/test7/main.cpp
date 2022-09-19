#include <iostream>
#include <stdio.h>
FILE *fp1,*fp2;
int main() {
    char c;
    int i,filesize;

    fp1=fopen("D:\\text1.txt","r");
    fp2=fopen("D:\\text2.txt","w");

    if(fp1==NULL || fp2==NULL)
    {
        printf("无法打开文件！\n");
        return(-1);
    }


    fseek(fp1,0,2);
    filesize=ftell(fp1);//长度
    i=1;
    int doing = 1;
    while(i<=filesize)
    {
//        if(doing == 1){
//            printf("正在完成...\n");
//        }
//        doing = 0;
        fseek(fp1,-i,2);
        i++;
        c=fgetc(fp1);
        fputc(c,fp2);
    }

    fclose(fp1);
    fclose(fp2);
    printf("已经完成!");
    return(0);

}
