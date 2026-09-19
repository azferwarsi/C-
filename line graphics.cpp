#include<graphics.h>
#include<iostream>
#include<dos.h>

int main() {
	
	int gd = DETECT,gm;
	int x=50,y=50,font;
	initgraph(&gd, &gm,(char*)"");
                    	//line(200,200,400,200);
     for(font=0;font<=10;font++)
	 {
	 	settextstyle(font,0,2);
	 	delay(1000);
	 	
	 	outtextxy(x,y," Sanad");
	 
		y=y+20;	
		outtextxy(x,y," Sadeed ");
		y=y+22;
		outtextxy(x,y," Shayan ");
		y=y+24;
		outtextxy(x,y," Shifan ");
		y=y+26;
		outtextxy(x,y," Sajal ");
		y=y+28;
		outtextxy(x,y," Saaj ");
		y=y+30;			}               	
	getch();
	closegraph();
	
	return 0;
}
