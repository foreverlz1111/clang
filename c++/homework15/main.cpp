#include <iostream>
using namespace std;
class Employee{
private:
    int i;//编号
    const char *name;
    int i1;//工资
    int i2;//奖金
    int i3;//实发工资
public:
    Employee(int i, const char name[7], int i1, int i2) {
        this->i=i;
        this->name=name;
        this->i1=i1;
        this->i2=i2;
        i3=i1+i2;
    }
    void Show(){
        cout<<"编号："<<i<<endl<<"姓名："<<name<<endl<<"基本工资："<<i1
            <<endl<<"奖金："<<i2<<endl;
    }
    void ShowSalary(){
        cout<<"实发工资："<<i3<<endl;
    }
};
class Saleman{
private:
    int i;//编号
    const char *name;
    int i1;//基本工资
    int i2;//奖金
    double d;//提成比例
    int i3;//总工资
    int i4;//实发工资
public:
    Saleman(int i, const char name[10], int i1, int i2, double d, int i3) {
        this->i=i;
        this->name=name;
        this->i1=i1;
        this->i2=i2;
        this->d=d;
        this->i3=i3;
        i4=i1+i2+d*i3;
    }
    void Show(){
        cout<<"编号："<<i<<endl<<"姓名："<<name<<endl<<"基本工资："<<i1
            <<endl<<"奖金："<<i2<<endl<<"销售员提成比例:"<<d<<endl
            <<"个人销售额:"<<i3<<endl;
    }
    void ShowSalary(){
        cout<<"实发工资:"<<i4<<endl;
    }
};
class Manager{
private:
    int i;//编号
    const char *name;
    int i1;//基本工资
    int i2;//奖金
    double d;//提成比例
    int i3;//总工资
    int i4;//实发工资
public:
    Manager(int i, const char name[7], int i1, int i2, double d, int i3) {
        this->i=i;
        this->name=name;
        this->i1=i1;
        this->i2=i2;
        this->d=d;
        this->i3=i3;
        i4=i1+i2+d*i3;
    }
    void Show(){
        cout<<"编号："<<i<<endl<<"姓名："<<name<<endl<<"基本工资："<<i1
            <<endl<<"奖金："<<i2<<endl<<"经理提成比例:"<<d<<endl
            <<"个人销售额:"<<i3<<endl;
    }
    void ShowSalary(){
        cout<<"实发工资:"<<i4<<endl;
    }
};
class SaleManager{
private:
    int i;//编号
    const char *name;
    int i1;//基本工资
    int i2;//奖金
    double d;//提成比例
    double d1;//经理提成比例
    int i3;//总工资
    int i4;//总销售额
    int i5;//实发工资
public:
    SaleManager(int i, const char name[7], int i1, int i2, double d, int i3, double d1, int i4) {
        this->i=i;
        this->name=name;
        this->i1=i1;
        this->i2=i2;
        this->d=d;
        this->d1=d1;
        this->i3=i3;
        this->i4=i4;
        i5=i1+i2+d*i3+d*i4;
    }
    void Show(){
        cout<<"编号："<<i<<endl<<"姓名："<<name<<endl<<"基本工资："<<i1
            <<endl<<"奖金："<<i2<<endl<<"销售员提成比例:"<<d<<endl
            <<"个人销售额:"<<i3<<endl<<"经理提成比例:"<<d1<<endl
            <<"总销售额:"<<i4<<endl；
    }
    void ShowSalary(){
        cout<<"实发工资:"<<i5<<endl;
    }
};
int main() {
    Employee e(106, "李明", 1680, 1080);	// 定义对象
    cout << "员工信息:" << endl;	// 输出提示
    e.Show();			// 输出基本信息
    e.ShowSalary();		// 输出实发工资
    Saleman s(108, "李杰明", 2680, 1680, 0.15, 23000);	// 定义对象
    cout << endl << "销售员信息:" << endl;		// 输出提示
    s.Show();			// 输出基本信息
    s.ShowSalary();		// 输出实发工资
    Manager m(116, "吴倩", 3680, 2680, 0.1, 83000);	// 定义对象
    cout << endl << "经理信息:" << endl;			// 输出提示
    m.Show();			// 输出基本信息
    m.ShowSalary();		// 输出实发工资
    SaleManager sm(118, "吴杰", 3680, 2680, 0.15, 28000, 0.1, 88000);
    cout << endl << "销售经理信息:" << endl;		// 输出提示
    sm.Show();			// 输出基本信息
    sm.ShowSalary();		// 输出实发工资
    return 0;               	// 返回值, 返回操作系统
}