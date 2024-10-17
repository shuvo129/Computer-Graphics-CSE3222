//#include<iostream.h>

#include<stdio.h>

#include<conio.h>

#include<dos.h>

#include<stdlib.h>

#include<graphics.h>

int main()

{

	int gd=DETECT,gm;
	int i, x, y;

	initgraph(&gd,&gm,"c:tcbgi");




	while(!kbhit())

	{

	   for(int i=0;i<550;i++)

	    {

	    //______head

	       setcolor(14);

		ellipse(400-i,100,40,180,20,20);

		ellipse(478-i,78,199,220,66,30);

		ellipse(377-i,105,320,70,7,7);

	    //________back

		setcolor(12);

		line(380-i,99,368-i,103);

		line(368-i,103,380-i,109);

		setcolor(13);

		ellipse(435-i,95,200,250,9,4);

		ellipse(402-i,107,190,260,20,14);



	if(i%8==0)

	{

	//______wing

	setcolor(10);

	 ellipse(389-i,90,340,20,45,60);

	 ellipse(439-i,85,0,140,10,22);

	 ellipse(453-i,93,0,120,10,22);

	 ellipse(469-i,110,0,140,10,22);

	 ellipse(385-i,74,340,10,40,60);

	 ellipse(428-i,83,45,122,6,22);

	 ellipse(462-i,91,216,320,80,50);

	}

	else

	{



	 ellipse(381-i,138,340,20,45,60);

	 ellipse(429-i,143,230,350,10,22);

	 ellipse(443-i,137,230,350,10,22);

	 ellipse(459-i,127,230,350,10,22);

	 ellipse(494-i,90,207,260,70,20);



	 setcolor(10);

	 ellipse(380-i,90,357,20,45,60);

	 ellipse(429-i,85,0,140,10,22);

	 ellipse(443-i,93,0,120,10,22);

	 ellipse(459-i,110,0,140,10,22);

	 ellipse(462-i,91,216,244,80,50);

	 ellipse(462-i,91,275,320,80,50);

	 }

	 setcolor(12);

	 circle(400-i,100,2);

	 setcolor(13);

	 ellipse(480-i,161,50,90,70,50);

	 ellipse(560-i,143,100,140,50,30);

	 ellipse(580-i,118,200,240,60,10);



	 setcolor(14);

	 line(550-i,114,550-i,128);



	 delay(35);

	 cleardevice();

	 }

	}



	getch();

	closegraph();


}

