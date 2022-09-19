#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main(){
  printf("\n");
  FILE *file1;
  int a[10];
  for (int i = 0;i < 10;++i){
    a[i] = random() % 199 + 1;
    printf("a[%d] = %d [%d] \n",i,a[i],&a[i]);
  }
  int *array = a;
  array+=3;
  printf("array+=3 == %d\n",*array);
  /*
  for (int j = 0;j < 10;++j){
    printf("array = %d [%d] \n",array,&array);
    array++;
  }
  */
  /***********
  char *s,str[10] = {"clang"};
  s = str;
  puts(str);
  ***********/
  //********************
  printf("输入小时数：");
  int hour;
  scanf("%d",&hour);
  if (hour <= 12)
    printf("30元\n");
  else if(hour > 12 && hour <= 48)
    printf("%d元\n",hour*3);
  else if(hour > 48)
    printf("%.1f元\n",hour*2.5);
  /********************/
  return 0;
}
