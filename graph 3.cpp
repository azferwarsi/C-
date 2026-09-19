#include<graphics.h>
#include<iostream>
#include<dos.h>

int main()
{
	int gd = DETECT,gm;
	int x,y,r;
	initgraph(&gd,&gm,"");
	//outtextxy(100,100," GRANDFATHER NAME....");
	//outtextxy(200,200," MASTER ABU NASIM AKHTER..");
	//arc(100,100,0,150,50);
   x= getmaxx()/2;
   y= getmaxy()/2;
   for(r=20;r<220;r++)
  
{
	delay(100);
	setcolor(r/10);
	arc(x,y,0,180,r);
	
}
	
	
	closegraph();

	return 0;
}
