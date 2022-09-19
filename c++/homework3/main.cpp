#include <iostream>
using namespace std;
int main() {
    int n=0,a=-1;
    double end=1;
    cout<<"please key in>>>>  ";
    cin>>n;
    for(int i=2;i<n;n++){
        end+=a*(1.00/n);
        a=-a;
    }
    printf("%.2f",end);
    return 0;
}