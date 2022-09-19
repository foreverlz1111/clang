#include <iostream>
#include "unistd.h"
//#include "kthread.h"
int main() {
    //xxx以内的素数数量，xxx以内最大的素数
    /*
    int bool1 = 1;
    int bool2 = 1;
    int count = 0;
    int i = 2;
    fork();

    // int a = 2;
    while (bool1) {

        int a = 2;
          while (bool2) {
              if (i % a == 0) {
                  //printf("i = %d  a = %d\n",i,a);
                 count++;
              }
             if (a < i) {
                   a++;
               }
                else if (a == i){
                                   if(count == 1){
                      printf("%d\n",i);
                                 }
                    count = 0;
                                   bool2 = 0;
              }
            }
        i++;
        if (i == 20) {
            bool1 = 0;
        }
        else{
            bool2 = 1;
        }
    }
     */
    int bool1 ;
    bool1 = 1;
    int bool2 ;
    bool2 = 1;
    int count ;
    count = 0;
    int total;
    total = 0;
    int max;
    max = 0;
    int i ;
    i = 2;
    // int a = 2;
    while (bool1) {
        int a;
        a = 2;
        while (bool2) {
            if (i % a == 0) {
                //printf("i = %d  a = %d\n",i,a);
                count++;

            }
            if (a < i) {
                a++;
            }
            else if (a == i){

                if(count == 1){
                  //  printk(KERN_INFO "sushu:%d\n", i);
                  printf("sushu:%d\n",i);
                  max = i ;
                  total = total + 1;
                }
                count = 0;
                bool2 = 0;
            }
        }

        i++;
        if (i == 66666) {
            bool1 = 0;
        }
        else{
            bool2 = 1;
        }
    }
    printf("max  is %d : ,total is: %d\n",max,total);
    return 0;
}