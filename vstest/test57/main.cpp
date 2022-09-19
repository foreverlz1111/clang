#include <iostream>
struct performer{int score[10],max=0,min=100;};
int max(int a[10],int max){
    for(int i=0;i<10;i++){if(a[i]>=max)max=a[i];}
    return max;}
int min(int a[10],int min){
    for(int i=0;i<10;i++){if(a[i]<=min)min=a[i];}
    return min;}
double ave(int a[10],int max,int min){
    double ave;
    int maxLocation=0,minLocation=0;
    for(int i=0;i<10;i++){if(a[i]<=min){min=a[i];minLocation=i;}}
    a[minLocation]=0;
    for(int k=0;k<10;k++){if(a[k]>=max){max=a[k];maxLocation=k;}}
    a[maxLocation]=0;
    for(int j=0;j<10;j++)ave+=a[j];
    ave/=10;
    return ave;
}
void select(int a[10]){
    int tmp;
    for(int i=0;i<9;i++){
        for(int k=0;k<8-i;k++)
            if(a[k]>a[k+1]){
                tmp=a[k];
                a[k]=a[k+1];
                a[k+1]=tmp;}}
}
int main() {
    performer p;
    for(int i;i<10;i++){
        printf("输入第%d个选手分数：",i+1);
        scanf("%d",&p.score[i]);}
    printf("去掉一个最高分：%d",max(p.score,p.max));
    printf("去掉一个最低分：%d",min(p.score,p.min));
    printf("最终成绩为：%.2lf\n",ave(p.score,p.max,p.min));
    select(p.score);
    for(int k=0;k<10;k++)printf("%3d",p.score[k]);
    return 0;}