// easyx1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<iostream>
#include <graphics.h>
#include <conio.h>
int main() {
initgraph(300, 500, SHOWCONSOLE);
outtextxy(20,170,_T("发色:"));
IMAGE y; IMAGE b; IMAGE g; IMAGE w; IMAGE gr;
loadimage(&y,_T("D:\\y.JPG")); 
loadimage(&g, _T("D:\\g.JPG"));
loadimage(&b, _T("D:\\b.JPG"));
loadimage(&w, _T("D:\\w.JPG"));
loadimage(&gr, _T("D:\\gr.JPG"));
putimage(20, 200, &y);
putimage(40, 200, &g);
putimage(60, 200, &b);
putimage(20, 220, &w);
putimage(40, 220, &gr);
	MOUSEMSG m;
	while (true)
	{
		m = GetMouseMsg(); 
		switch (m.uMsg)
		{	
		case WM_LBUTTONDOWN:
			//printf("%d", m.x);分析
			if(m.x<40 && m.x>20 && m.y < 220 && m.y>200){
				setfillcolor(YELLOW);
				//printf("%d", m.y);分析
				fillcircle(150, 200, 50);//大大椭圆;
				outtextxy(130, 250, _T("腻黄"));
				printf("点击黄色，x:%d  y:%d  \n",m.x,m.y);
				continue;
			}
			if (m.x < 60 && m.x>40 && m.y<220 && m.y>200) {
				setfillcolor(GREEN);
				//printf("%d",m.y);
				fillcircle(150, 200, 50);//大大椭圆;
				outtextxy(130, 250, _T("叶绿"));
				printf("点击绿色，x:%d  y:%d  \n", m.x, m.y);
				continue;
			}
			if (m.x < 80 && m.x>60 && m.y < 220 && m.y>200) {
				setfillcolor(BLUE);
				//printf("%d",m.y);
				fillcircle(150, 200, 50);//大大椭圆;
				outtextxy(130, 250, _T("深蓝"));
				printf("点击蓝色，x:%d  y:%d  \n", m.x, m.y);
				continue;
			}
			if (m.x < 40 && m.x>20 && m.y < 240 && m.y>220) {
				setfillcolor(WHITE);
				//printf("%d", m.y);分析
				fillcircle(150, 200, 50);//大大椭圆;
				outtextxy(130, 250, _T("牙白"));
				printf("点击白色，x:%d  y:%d  \n", m.x, m.y);
				continue;
			}
			if (m.x < 60 && m.x>40 && m.y < 240 && m.y>220) {
				setfillcolor(DARKGRAY);
				//printf("%d", m.y);分析
				fillcircle(150, 200, 50);//大大椭圆;
				outtextxy(130, 250, _T("强灰"));
				printf("点击灰色，x:%d  y:%d  \n", m.x, m.y);
				continue;
			}
			continue;
		}
	}

		Sleep(333000);
		closegraph();
	
}
