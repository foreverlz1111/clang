#include <iostream>
using namespace std;
int decide(int a[3]){
    int mul=1;
    for(int i=0;i<3;i++){
        if(a[i]%2!=0)
            mul*=a[i];}
    cout<<"mul="<<mul;
}
int main() {
    int a[3];
    cout<<"please key in 3 numbers."<<endl;
    for(int i=0;i<3;i++)
        cin>>a[i];
    decide(a);
    return 0;
}