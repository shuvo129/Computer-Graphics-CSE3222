//#include <iostream.h>
#include <conio.h>
#include <graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	setcolor(RED);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(345,180,190,189,89,50);
	floodfill(345,180,RED);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(224,150,40);
	floodfill(225,150,RED);
	setfillstyle(SOLID_FILL,BLACK);
	circle(200,143,2);
	floodfill(200,143,RED);
	line(135,183,190,170);
	line(135,183,185,143);
	line(379,290,379,227);
	line(340,280,345,230);
	arc(371,295,30,160,10);
	arc(331,286,20,160,10);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(507,160,110,109,80,20);
	floodfill(510,160,RED);
	setfillstyle(SOLID_FILL,YELLOW);
	ellipse(503,160,108,107,70,10);
	floodfill(503,160,RED);
	getch();
	closegraph();
}
