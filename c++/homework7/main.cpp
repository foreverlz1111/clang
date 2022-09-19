#include <iostream>
class people{
private:
    std::string Name;
    int Age;
    int Height;
    int Weight;
public:
    std::string getName(void);
    int getAge(void);
    int getHeight(void);
    int getWeight(void);
    void SetInfo(std::string N,int A,int H,int W);
    int Eating;
    int Sport;
    void ShowInfo(int E,int Sp);
};
void people::ShowInfo( int E, int Sp) {
    Eating=E;
    Sport=Sp;
}

void people::SetInfo(std::string name, int age, int height, int weight) {
    Name=name;
    Age=age;
    Height=height;
    Weight=weight;
}

int people::getWeight(void) {
    return Weight;
}

std::string people::getName(void) {
    return std::string(Name);
}

int people::getAge(void) {
    return Age;
}

int people::getHeight(void) {
    return Height;
}

int main() {
    using namespace std;
    people people;
    cout<<"please key in Name,Age,Height,Weight>>>>>>>>>>>   ";
    std::string Name;
    int Age,Height,Weight,Eating,Sport;
    cin>>Name>>Age>>Height>>Weight;
    people.SetInfo(Name,Age,Height,Weight);
    cout<<"key in >>>>>>>>>>food & show";
    cin>>Eating>>Sport;
    people.ShowInfo(Eating,Sport);
    cout<<"姓名：  "+people.getName()<<endl<<"年龄:  "<<people.getAge()<<endl
        <<"身高:   "<<people.getHeight()+people.Sport<<endl<<
        "体重:   "<<people.getWeight()+people.Eating;
    return 0;
}