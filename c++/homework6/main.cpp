#include<iostream>
#include<iomanip>
using namespace std;
int publical(int a,int b){
    while(a != b){
        if(a > b)a = a - b;
        else b = b - a;
    }
    return a;
}
int main(){
    cout<<"only 3 lines you can input>>>"<<endl;
    int input[3];
    int x,y,a,z;
    for(int n = 0;n < 3;n++){
        cin>>x>>y;
        input[n]=publical(x,y);
        z=n;
    }
    z++;
    for(int i =0;i<z-1;i++){
        a=i;
        for(int j=i+1;j<z;j++){
            if(input[j]<input[i]){
                a=j;
                int temp;
                temp=input[a];
                input[a]=input[i];
                input[i]=temp;
            }
        }
    }
    cout<<"Result："<<endl;
    for(int i=0;i<z;i++){
        cout<<input[i]<<setw(5);
    }
    return 0;
}