#include <stdio.h>

int main(int argc,char *argv[]){
  
  int a = -1,b = 4;
  int k = ( ++a <= 0)&&!(b-- <= 0);
  printf("k = %d\n",k);
  //******************************都是正确的赋值：
  //char d[5] = {"abc"};
  //char d[5] = {'a','b','c'};
  //char d[5] = "";
  //char d[5] = "abc";
  //puts(d);
  //******************************
 
  return 0;
}
