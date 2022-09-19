#include <iostream>
using namespace std;
class time{
private:int hour,min,sec;
public:
    time (int a,int b,int c){
        this->hour=a;
        this->min=b;
        this->sec=c;
    }
    time operator<<(time &t){

    }
    int getHour() const {
        return hour;
    }

    void setHour(int hour) {
        time::hour = hour;
    }

    int getMin() const {
        return min;
    }

    void setMin(int min) {
        time::min = min;
    }

    int getSec() const {
        return sec;
    }

    void setSec(int sec) {
        time::sec = sec;
    }
};
int main( )
{

    return 0;
}