#include <iostream>

class Ellipse{
private:
    int x1,y1,x2,y2;
public:
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
    void X1(int X1){
    }
void Y1(int Y1){
    y1=Y1;
}
void X2(int X2){
 x2=X2;
}
void Y2(int Y2){
    y2=Y2;
}

   double area(int X1,int Y1,int X2,int Y2);
};
double area(int X1,int Y1,int X2,int Y2){
    double area=1.00;
    area=Y1*X2*3.14;
    return area;
}

int main() {
    using namespace std;
    Ellipse ellipse;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ellipse.X1(x1);
    ellipse.X2(x2);
    ellipse.Y1(y1);
    ellipse.Y2(y2);
    cout<<"Area is>>>>>>>>>>>>"<<endl<<ellipse.area(x1,y1,x2,y2);
    return 0;
}