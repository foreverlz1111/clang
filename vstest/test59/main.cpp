#include <iostream>
using namespace std;
class Myclass{
private:
    int n;
public:
    Myclass(int k):n(k){}
    int Get(){ return n;}
    int Get()const { return n+1;}
};
int main() {
    int abb[]={0,1,2,3,4,5,6};
    char baa[]={'a','b','c','d','e','f','g'};
    Myclass a(5);
    const Myclass b(6);
    cout<<a.Get()<<b.Get()<<endl;
    return 0;
}