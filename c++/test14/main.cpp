#include <iostream>
#include "math.h"
using namespace  std;
static long CC(int n,long i, long j)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return CC(n-1,j,i+j)+j;
}
static long CC(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return CC(n - 1) + CC(n - 2);
}
long Fib(int n, long nOne, long nTwo)
{
    n=n+1;
    for (int i = 2; i < n; i++)
    {
        nTwo += nOne;
        nOne = nTwo - nOne;
    }
    return n == 1 ? nOne : nTwo;
}
int main() {
    //cout<<CC(40,0,1)<<endl;
    //cout<<CC(40)<<endl;
    for(int i = 0; i<10;i++)
    cout<<Fib(i,1,1)<<endl;
    return 0;
}
