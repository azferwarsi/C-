#include<graphics.h>
#include<iostream>
int main()
{
	int gd= DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	arc(200,200,0,180,50);
	//bar(50,50,200,100);    // filled rectangle
	
	bar3d(300,50,50,100,20,1);
	setcolor(RED);
	delay(100);
  	fillellipse(400,100,25,25);
  	
  	
	getch();
	closegraph();
	return 0;
}
