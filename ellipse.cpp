#include<graphics.h>
#include<iostream>
#include<dos.h>
int main()
{
	
	int gd= DETECT,gm;
	int x,y;
	initgraph(&gd,&gm,"");
	
	x=getmaxx()/2;
	y=getmaxy()/2;
	setcolor(YELLOW);
	delay(1000);
	ellipse(x,y,0,360,100,50);
	delay(1000);
	fillellipse(x,y,100,25);
	getch();
	closegraph();
}
