#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
FILE *student_file;
struct student{
    char code[20];//学号
    char name[20];//姓名
    char age[20];//年龄
    char height[20];//身高
};
struct student;

int main() {
    struct student student1={"2709001","张三","19","170"};
    struct student student2={"2709002","李四","19","165"};
    struct student student3={"2709003","王五","18","166"};
    struct student student4={"2709004","孙七","20","180"};
    printf("%3s %3s %3s %3s \n",student3.code,student3.name,student3.age,student3.height);
    student_file = fopen("D:\\student_file.txt","w");

    //fseek(student_file,SEEK_SET,SEEK_END);
    //fputs(student3.name,student_file);
    fwrite(&student3,sizeof(student3),1,student_file);
//    fwrite(student3.name,sizeof(student3.name),1,student_file);
//    fwrite(student3.age,sizeof(student3.age),1,student_file);
//    fwrite(student3.height, sizeof(student3.height), 1, student_file);

        fclose(student_file);
        student_file = fopen("D:\\student_file.txt","r");
        struct student studentRead;
        fread(&studentRead,sizeof(student3),1,student_file);
        printf("%3d字read:   %3s %3s",ftell(student_file),studentRead.code,studentRead.name);

//    int size = ftell(student_file);//读取字节
//    char sinfo[size];
//    fread(sinfo,0,size,student_file);
//    fgets(sinfo,size,student_file);

//    int c;
//    while(1)
//    {
//        c = fgetc(student_file);
//        if( feof(student_file) )
//        {
//            break ;
//        }
//        printf("%c", c);
//    }

//    printf("字节:%3d \n %s \n",size,sinfo);

    fclose(student_file);
}
