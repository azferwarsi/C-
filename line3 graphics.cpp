#include<graphics.h>

int main()
{
	int gd= DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	line(100,50,100,150);
	closegraph();
	getch();
	return 0;
}
