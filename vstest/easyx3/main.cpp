// easyx1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>
#include <graphics.h>
#include <conio.h>


void multiply(double x, IMAGE* img)
{
    int R, B, G;
    DWORD* Mg = GetImageBuffer(img);
    for (int i = img->getwidth() * img->getheight() - 1; i >= 0; i--) {
        R = pow(GetRValue(Mg[i]), x);
        G = pow(GetGValue(Mg[i]), x);
        B = pow(GetBValue(Mg[i]), x);
        Mg[i] = RGB(R, G, B);
    }
}
// 主函数
void main(){
    double x[7] = { 0.1,0.2,0.4,1.0,2.5,5.0,10.0 };
    TCHAR b[7] = { '1','2','3','4','5','6','7' };

    char s ='数值';
    int count = 1;
    initgraph(700, 600, SHOWCONSOLE);
    IMAGE img;
    loadimage(&img, _T("D:\\inf.JPG"));
    outtextxy(240, 230, _T("原图片："));
    putimage(300, 200, &img);
    TCHAR a = _T('第');  TCHAR c = _T('次');
    RECT r = { 0, 0, 32, 250 };
    Sleep(3000);
    for (int i = 0; i < 7; i++) {
        printf("第%d次输出:r为  %.2f\n", i+1,x[i]);
        IMAGE image = img;

        outtextxy(240, 350, a);
        outtextxy(265, 350, b[i]);
        outtextxy(280, 350, c);
        multiply(x[i],&image);
        putimage(300, 320, &image);
        Sleep(2000);
        if (i == 6) {
            TCHAR s[] = _T("已经完成。。。" );
            outtextxy(420, 350, s);
        }
    }
    Sleep(3000);
    closegraph();
}
