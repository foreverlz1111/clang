#include <iostream>
using namespace std;
class Date{
public:
    int year1,year2,month1,day1,month2,day2;
    void show(int y1,int m1,int d1,int y2,int m2,int d2){
        year1=y1;
        month1=m1;
        day1=d1;
        year2=y2;
        month2=m2;
        day2=d2;
        cout<<"原日期"<<endl<<year1<<"年"<<month1<<"月"<<day1<<"日"<<endl;
        cout<<"新日期"<<endl<<year2<<"年"<<month2<<"月"<<day2<<"日";
    }
};
int main() {
    int a[2][3];
    Date date;
    cin>>a[0][0]>>a[0][1]>>a[0][2];
    cin>>a[1][0]>>a[1][1]>>a[1][2];
    date.show(a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2]);
    return 0;
}