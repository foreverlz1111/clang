#include <iostream>
#include <tgmath.h>

using namespace std;
long long trans(long long a){
    int d=0,count=0,pass;//十进制
    while(a!=0)
    {
        pass=a%10;
        a/=10;
        d+=pass*pow(2,count);
        ++count;
    }
    return d;
}
int main() {
    long long a;
    cout<<"please key in>>>>>  ";
    cin>>a;
    cout<<endl<<"D is>>>>>   "<<trans(a);
    return 0;
}