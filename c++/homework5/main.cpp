#include<iostream>
#include <iomanip>

using namespace std;
int C(int a,int b) {
    long x_sum=1,y_sum=1,x_y_sum=1;
    for(int i=1;i<a+1;i++){x_sum*=i;}
    for(int j=1;j<b+1;j++){y_sum*=j;}
    for(int k=1;k<(a-b)+1;k++){x_y_sum *= k;}
    return (x_sum/(y_sum*x_y_sum));
}
int main(){
    long i_o[3];//数位过大
    cout<<"you can input [3] lines in total>>>>>>   ";
    for(int i=0;i<3;i++){
        int x,y;
        cin>>x>>y;
        i_o[i]=C(x,y);
    }
    cout<<"here are your results>>>>>";
    for(int j=0;j<3;j++){cout<<setw(5) <<i_o[j];}
    return 0;
}