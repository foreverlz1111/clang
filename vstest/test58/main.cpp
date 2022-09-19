#include <iostream>
#include <cmath>
double lightyear(double);//function prototype
int main() {
    using namespace std;
    double ly;
    cout<<"输入光年"<<endl;
    cin >> ly;
    int au=lightyear(ly);//天文单位
    cout<<ly<<"光年 = "<<au<<"个天文单位";

    return 0;
    }
double lightyear(double n){
    using namespace std;
    n=n*63240;
    return n;
}