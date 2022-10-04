#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main() {
	initgraph(640, 480); //创建窗口
	for (int i = 1; i <= 1000; i++) {
		//setcolor(GREEN);//设置颜色（定）
//		setfillcolor(EGERGB(255 - 2 * i, 2 * i, 2 * i)); //设置颜色（手动输入）
//		setcolor(EGERGB(255 - 2 * i, 2 * i, 2 * i)); //设置颜色（手动输入）
//		line(100, 100 + i, 500 + i, 200); //画线
//		circle(200 + i, 200, i); //画空心圆
//		bar(50,100+i,300,200);//画长方形
//		fillellipse(200,200,150+Fi,100-i);//椭圆
//		setfont(12,0,"宋体");
//		char a[100]={"ZMY NB"};
//		outtextxy(100, 100,a);//输出文字
		line(i, i, i * i, i * i);
		Sleep(100);
	}
	Sleep(10000);
	closegraph();//关闭图形库界面
	return 0;
}
