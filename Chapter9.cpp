#include <stdio.h>

#include "string.h"

#include "stdlib.h"

/**************************************************************
 **  Git HTTPS:https://github.com/foreverlz1111/clang.git    **
 **************************************************************/

struct s9_2{
    int num;
    char name[20];
    char sex;
    struct date{
        int year;
        int mouth;
        int day;
    }birth;
    float score;
};
struct s9_3{
    char name[20];
    int count;
};
struct s9_4{
    int num;
    char name[20];
    float score[3];
    float sum;
};
struct s9_5{
    int num;
    char name[20];
    char sex;
    float score;
};
struct s9_6{
    int num;
    char name[20];
    char sex;
    int age;
};
struct s9_7{
    int num;
    int age;
    struct s9_7 *next;
};
struct s9_7 *create(int n){
    struct s9_7 *head = NULL,*p,*p1;
    for (int i = 0; i < n; ++i) {
        p = (struct s9_7*) malloc(sizeof (struct s9_7));
        printf("输入编号和年龄：");
        scanf("%d%d",&p->num,&p->age);
        p->next=NULL;
        if (head == NULL){
            p1=p;
            head=p;
        }
        else
        {
            p1->next=p;
            p1=p;
        }
    }
    return (head);
}
void f9_7(struct s9_7 *head){
    struct s9_7 *p = head;
    int i = 1;
    while (p != NULL){
        printf("i = %d \t num=%d \t age = %d \n",i,p->num,p->age);
        p = p->next;
        i++;
    }
}
struct s9_7 *deletenode(struct s9_7 *head,int nodenum){
    struct s9_7 *p = head,*p1 = head;
    if(head == NULL){
        printf("空链表\n");
        return (head);
    }
    while (nodenum!= p->num&&p->next!=NULL){
        p1 = p;
        p=p->next;
    }
    if (nodenum==p->num){
        if (p==head)
            head=p->next;
        else
            p1->next=p->next;
        free(p);
    } else
        printf("未找到节点\n");
    return head;
}
struct s9_7 *insertnode(struct s9_7 *head,int num,int age){
    struct s9_7 *p1=head,*p,*temp=NULL;
    p=(struct s9_7 *) malloc(sizeof (struct s9_7));
    p->next=NULL;
    p->num=num;
    p->age=age;
    if (head==NULL)
        head=p;
    else
    {
        while (p1->num<num&&p1->next!=NULL){
            temp=p1;
            p1=p1->next;
        }
        if (p1->num>num){
            if (p1==head){
                p->next=head;
                head=p;
            } else{
                p1=temp;
                p->next=p1->next;
                p1->next=p;
            }
        } else p1->next=p;
    }
    return head;
}
struct s9_10{
    char name[20];
    unsigned long num;
    char job;
    union {
        char cls[15];
        char pos[5];
    }ctg;
};
enum week{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
enum body{a,b,c,d,e};//出勤、公休、矿工、迟到早退、事病假
enum{n1,n2=5,n3,n4=9}days;
int main() {
    /*9-2*/
    struct s9_2 struction1;
    struction1.num=1;
    struction1.sex='b';
    struction1.name[0]={'f'};
    struction1.birth.year=2000;
    struction1.birth.mouth=2;
    struction1.birth.day=22;
    struction1.score=98.9;
    printf("struction1.num=%d;\nstruction1.sex=%c;\nstruction1.name[0]=%c;\n"
           "struction1.birth.year=%d;\n"
           "struction1.birth.mouth=%d;\n"
           "struction1.birth.day=%d;\n"
           "struction1.score=%f;",struction1.num,struction1.sex,struction1.name[0],struction1.birth.year,
           struction1.birth.mouth,struction1.birth.day,struction1.score);

    /*9-3*/
    struct s9_3 struction2[3]={{"user1"},{"user2"},{"user3"}};
    int number1 = 0,number2,number3=0;//other,flag,n
    char array1[20];
    do {
        number2 = 0;
        printf("\n输入投票的姓名，（输入over可中止输入）:");
        scanf("%s",array1);
        number3++;
        for (int i = 0; i < 3; ++i) {
            if (strcmp(array1,struction2[i].name)==0){
                struction2[i].count++;
                number2 = 1;
            }
        }
        if (number2 == 0)
            number1++;
    } while (strcmp(array1,"over")!=0);
    number3--;
    printf("投票总数：%d\n",number3);
    for (int i = 0; i < 3; i++) {
        printf("%s : %d\n",struction2[i].name,struction2[i].count);
    }
    printf("无效票：%d\n",number1);

    /*9-4*/
    struct s9_4 struction3[3]={
            {1,"user1",{60,70,80}},
            {2,"user2",{61,71,81}},
            {3,"user3",{62,72,82}},
    };
    float array2[3] = {0};
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            struction3[i].sum+=struction3[i].score[j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            array2[i]+=struction3[i].score[j];
        }
        array2[i]/=3;
    }
    for (int i = 0; i < 3; ++i) {
        printf("%d  %s\n",struction3[i].num,struction3[i].name);
        for (int j = 0; j < 3; ++j) {
            printf("score%d:%f\t",j,struction3[i].score[j]);
        }
        printf("\nsum:%f\n----------------------------------\n",struction3[i].sum);
    }
    for (int j = 0; j < 3; ++j) {
        printf("score_average %d: %f\n",j,array2[j]);
    }

    /*9-5*/
    struct s9_5 struction4,*point_struction4 = &struction4;
    (*point_struction4).num = 1;
    (*point_struction4).name[0] = 'u';
    (*point_struction4).sex = 'b';
    (*point_struction4).score = 98.9;
    printf("(*point_struction4) num=%d\tname=%s\tsex=%c score=%f\n",(*point_struction4).num,(*point_struction4).name,
           (*point_struction4).sex,(*point_struction4).score);

    /*9-6*/
    struct s9_6 struction5[3]={
            {1,"user1",'b',32},
            {2,"user2",'n',34},
            {3,"user3",'b',33}
    };
    struct s9_6 *point_struction5;
    for ( point_struction5 = struction5;  point_struction5 < struction5+3; point_struction5++) {
        printf("%d\t%s\t%c\t%d\n",point_struction5->num,point_struction5->name,point_struction5->sex,point_struction5->age);
    }

    /*9-7+9-8+9.9*/
    int number4,number5=1;//n,num
    struct s9_7 *head=NULL;
    number4 = 3;
    head = create(number4);
    f9_7(head);
    printf("------------------------\n");
    head= deletenode(head,number5);
    f9_7(head);
    printf("------------------------\n");
    head = insertnode(head,4,24);
    f9_7(head);

    /*9-10*/
    struct s9_10 struction6={"wang",2501,'s'};
    struct s9_10 struction7={"zhang",1222,'t'};
    strcpy(struction6.ctg.cls,"2018计算机9班");
    strcpy(struction7.ctg.pos,"老师");
    printf("姓名\t编号\t工作\t类别\n");
    printf("%d\t%d\t%c\t%s\n",struction6.name,struction6.num,struction6.job,struction6.ctg.cls);
    printf("%d\t%d\t%c\t%s\n",struction7.name,struction7.num,struction7.job,struction7.ctg.pos);

    /*9-11*/
    enum week weekday;
    weekday=monday;
    printf("weekday : %d\n",weekday);

    /*9-12*/
    enum body month[31];
    int number6,number7,number8,number9,number10;
    number6=number7=number8=number9=number10=0;
    for (int i = 1; i <= 30; ++i) {
        month[i]=(enum body)(rand()%5);
    }
    for (int i = 1; i <= 30; ++i) {
        switch (month[i]) {
            case a:
                printf("%d %c 出勤\t",i,'a');number6++;break;
            case b:
                printf("%d %c 公休\t",i,'b');number7++;break;
            case c:
                printf("%d %c 矿工\t",i,'c');number8++;break;
            case d:
                printf("%d %c 迟到早退\t",i,'d');number9++;break;
            case e:
                printf("%d %c 事病假\t",i,'e');number10++;break;
        }
        if (i%5==0)
            printf("\n");
    }
    printf("\n出勤:%d、公休:%d、矿工:%d、迟到早退:%d、事病假:%d",number6,number7,number8,number9,number10);


    return 0;
}
