#include <iostream>
#include <string>
using namespace std;
template <typename T>void compare(T &a,T b[],T &c){
    c=b[0];
    for(int i = 0; i < a;i++){
        if(c>b[i+1]){
            c=c;
        }
        else if(c<b[i+1]) {
            c=b[i+1];
        }
    }
}
int main() {
    int aa=0,cc=0,bb=0;
    cin>>aa>>aa>>bb>>bb>>cc>>cc;
    int a = 5,max1=0,b[]={78,96,-12,52,856};
    double d[]={3.2,5.6,89.2,-3.2,46.2,63.47},max2=0,e=5;
    string f[]={"hello","world","example","virtual","char"};
    compare(a,b,max1);
    compare(e,d,max2);
    //compare(g,f,max3);
    cout<<max1<<endl<<max2<<endl<<"world";
    return 0;
}