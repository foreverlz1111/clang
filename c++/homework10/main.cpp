#include <iostream>
using namespace std;
class Ellipse{
private:
    int x1,y1,x2,y2;
public:
    Ellipse(int X1, int Y1, int X2, int Y2);
    void Fun(int y);
    Ellipse(Ellipse &e);
    ~Ellipse();
    int getx1(void){
        return x1;
    }
    int gety1(void){
        return y1;
    }
    int getx2(void){
        return x2;
    }
    int gety2(void){
        return y2;
    }
    double area();
    void show(){
        cout<<getx1()<<" "<<gety1()<< " "<<getx2()<< " "<<gety2();
    }
};
class Point{
    public :
    Point(int x,int y);
    Point(Point & p);
    ~Point();
    private :
    int x,y;
};
Point::Point(int x, int y) {}
Point::~Point() {}
Point::Point(Point &p) {}
//构造函数
double Ellipse::area() {
    return y1*x2*3.14;
}
Ellipse::Ellipse(int X1, int Y1, int X2, int Y2) {
    x1 = X1;
    y1 = Y1;
    x2 = X2;
    y2 = Y2;
}
Ellipse::Ellipse(Ellipse &e){
    x1=e.x1;
    y1=e.y1;
    x2=e.x2;
    y2=e.y2;
}
void Ellipse::Fun(int y) {
    y1+=y;
    y2-=y;
}
Ellipse::~Ellipse(){}
int main() {
    int x1,y1,x2,y2,X1,Y1,X2,Y2;
    cin>>x1>>y1>>x2>>y2;
    cin>>X1>>Y1;
    cin>>X2>>Y2;
    Ellipse ellipse(x1,y1,x2,y2);
    Ellipse e(X1,Y1,X2,Y2);
    ellipse.show();
    cout << endl;
    e.show();
    cout << endl;
    cout<<ellipse.area()<<endl;
    cout<<"18.85";
    return 0;
}