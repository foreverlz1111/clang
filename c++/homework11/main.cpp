#include <iostream>
using namespace std;
class Student{
private:
static int total;
public:
    static void Average(){avg = total / c_count;}
    static int getTotal();

    static void setTotal(int total);

    static int getAvg();

    static void setAvg(int avg);

    static int getCCount();

    static void setCCount(int cCount);

private:
    static int avg;
static int c_count;
};
int Student::total = 0;
int Student::avg = 0;
int Student::c_count = 0;

int Student::getTotal() {
    return total;
}

void Student::setTotal(int total) {
    Student::total = total;
}

int Student::getAvg() {
    return avg;
}

void Student::setAvg(int avg) {
    Student::avg = avg;
}

int Student::getCCount() {
    return c_count;
}

void Student::setCCount(int cCount) {
    c_count = cCount;
}

int main(){
    string a[5];
    int b[5];
    int total,count,avg;
    total = count = avg = 0;
    for(int i=0;i<5;i++){
        cin>>a[i]>>b[i];
        total +=b[i];
        count++;
    }
    Student student;
    student.setCCount(count);
    student.setTotal(total);
    student.Average();
    cout<<student.getTotal()<<endl<<student.getCCount()<<endl<<student.getAvg();
    return 0;
}