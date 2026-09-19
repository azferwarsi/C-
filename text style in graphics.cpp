#include<graphics.h>
#include<stdio.h>
int main()
{
	int gd=DETECT,gm;
	int x=25,y=50,font;
	initgraph(&gd,&gm,"");
	for(font=0;font<=10;font++)
	{
		settextstyle(font,0,2);
		outtextxy(x,y,"Azfer Warsi");
		y=y+25;
		closegraph();
		return 0;
	}
}
