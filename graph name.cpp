#include<graphics.h>
#include<iostream>
int main()
{
	
	int gd= DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	outtext("  Azfer Warsi");
	getch();
	closegraph();
	
	return 0;
}
