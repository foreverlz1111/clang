#include <iostream>
using namespace std;
class Employee{
public:
void showbase(){
    cout<<"个人基本信息："<<endl<<"编号："<<num<<endl<<"姓名："<<name<<endl
    <<"性别："<<sex<<endl<<"工资:"<<wage;
}
void showtotalwage(){
    cout<<"人数："<<count<<endl<<"总工资："<<totalWage<<endl;
    showbase();
};
private:
int num,wage,count,totalWage;
public:
    int getNum() const {
        return num;
    }

    void setNum(int num) {
        Employee::num = num;
    }

    int getWage() const {
        return wage;
    }

    void setWage(int wage) {
        Employee::wage = wage;
    }

    int getCount() const {
        return count;
    }

    void setCount(int count) {
        Employee::count = count;
    }

    int getTotalWage() const {
        return totalWage;
    }

    void setTotalWage(int totalWage) {
        Employee::totalWage = totalWage;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Employee::name = name;
    }

    const string &getSex() const {
        return sex;
    }

    void setSex(const string &sex) {
        Employee::sex = sex;
    }

private:
    string name,sex;
};
int main() {
    int num,wage,count;
    string name,sex;
    Employee employee;
    cin>>count;
    for(int i=0;i<count;i++){
        cin>>num>>name>>sex>>wage;
    }
    employee.setNum(num);
    employee.setName(name);
    employee.setCount(count);
    employee.setSex(sex);
    employee.setWage(wage);
    employee.showtotalwage();
    return 0;
}