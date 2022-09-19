#include <stdio.h>
#include <stdlib.h>
int main(){
  FILE *file1;
  if ((file1 = fopen("/home/sakurinn/read.txt","r")) == NULL)
    {
      printf("error in open\n");
      exit(0);
    }
  char alpha;
  for ( int i = 0; i < 1; ++i){
  alpha = fgetc(file1);
  if (alpha == '\n')
    printf("new line\n");
  else
    printf("alpha : %c \n",alpha);
  }
  printf("%d\n",0x8100);
  return 0 ;
}
