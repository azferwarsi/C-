#include<graphics.h>
#include<iostream>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	circle(200,200,100);
	arc(100,200,0,180,50);
	getch();
	closegraph();
	
	return 0;
}
