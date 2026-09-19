#include<graphics.h>
#include<stdio.h>

int main() {
   int gd = DETECT, gm;
   int x;
   initgraph(&gd,&gm,"");
    for(x=0;x<=420;x=x+10)
    {
    	cleardevice();
    	rectangle(50+x,100,150+x,200);
    	rectangle(150+x,150,200+x,200);
    	circle(75+x,210,10);
    	circle(175+x,210,10);
    	delay(200);
	}
   getch();
   closegraph();
   return 0;
}
