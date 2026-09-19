
#include<graphics.h>
#include<stdio.h>
#include<dos.h>

 int main()
 {
 	int gd=DETECT,gm;
 	initgraph(&gd,&gm,(char*)"");
 	delay(1000);
 	circle(100,100,30);
 	
    getch();
    closegraph();
 	
 	return 0;
 }
