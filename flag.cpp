#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()

{

    int gd=DETECT,gm;

    initgraph(&gd,&gm,"C:\\T\\BGI");

    setbkcolor(GREEN);

    setcolor(WHITE);

    rectangle(150,40,450,180);

    setfillstyle(1,GREEN);

    floodfill(160,50,WHITE);

    //setcolor(WHITE);

    circle(300,110,55);

    setfillstyle(1,RED);

    floodfill(320,120,WHITE);

    setcolor(RED);

   outtextxy(200,250,"BANGLADESH NATIONAL FLAG");

   for(int i=1,j=400;i<=400;i++,j--){


    }

    getch();

}

