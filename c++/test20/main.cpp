#include <stdio.h>
int main(){
  int a,b;
  for (a=1,b=2;a<=100;++a){
    if(b>=20)
      break;
    if(b%3==1){
      b+=3;
      continue;
    }
    b+=5;
  }
  printf("a = %d, b = %d\n",a,b);
  
  return 0;
}
