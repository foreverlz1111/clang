#include <iostream>
using namespace std;
int main()
{
    int cows;
    int years[56]={0,1,2,3};
    for(int i=4;i<=55;i++)
        years[i]=years[i-1]+years[i-3];
    while(cin>>cows&&cows!=0)
    {
        cout<<years[cows]<<endl;
    }
    return 0;
}