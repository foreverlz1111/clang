#include <iostream>
using namespace std;
class Publication{

public:
    void GetData() {}
    void Show(){}
};
class Book{

public:
    void Show() {

    }

    void GetData() {

    }
};
class Tape{

public:
    void Show() {

    }

    void GetData() {

    }
};
int main() {
    Publication p;				// 定义对象
    p.GetData();				// 输入相关信息
    cout << "出版物信息:" << endl;		// 输入提示
    p.Show();				// 输出相关信息
    Book b;				// 定义对象
    b.GetData();				// 输入相关信息
    cout << "书籍信息:" << endl;		// 输入提示
    b.Show();				// 输出相关信息
    Tape t;					// 定义对象
    t.GetData();				// 输入相关信息
    cout << "磁带信息:" << endl;		// 输入提示
    t.Show();				// 输出相关信息
    return 0;               	// 返回值, 返回操作系统
}