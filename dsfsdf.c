#include   <stdio.h>
#include   <conio.h>
#include<graphics.h>
#include     <dos.h>
#include "conio2.h"

//#include<conio2.h>

int main()
	{
	gotoxy(300,350);
	printf("\n\n\n\n\n\n");
	printf("\n\t\t\t   //---------------------||		");
	gotoxy(300,360);
	printf("\n\t\t\t   || Program Loading.... ||		");
	gotoxy(300,370);
	printf("\n\t\t\t   ||---------------------//		");
	gotoxy(550,450);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t");
	printf("\n\t\t\t\t\t\tBCA from IGNOU");
	delay(4000);
	int gd=DETECT, gm, i, j;
	initgraph(&gd,&gm," ");
	rectangle(50,-35,180,390);        // building
	outtextxy(0,400,"Counting");
	line(180,390,230,410);            // link line b/w suporter & building
	outtextxy(230,75,"=====-(");      // catch clip
	outtextxy(230,82,"      \\");     //   - - -
	line(230,70,230,410);             // suporter
	line(370,70,370,410);             // suporter

	/*	Rocket design		*/
	line(300,40,280,70);
	line(300,40,320,70);
	rectangle(280,70,320,110);
	setcolor(6);
	circle(300,90,9);
	setcolor(WHITE);
	line(280,110,290,130);
	line(320,110,310,130);
	line(290,130,310,130);
	line(290,130,290,185);
	line(310,130,310,185);
	line(290,185,310,185);
	line(290,185,280,195);
	line(310,185,320,195);
	line(280,195,280,295);
	line(320,195,320,295);
	/*	  Name of Country	*/
	setcolor(RED);
	outtextxy(297,135,"I");
	outtextxy(297,145,"N");
	outtextxy(297,155,"D");
	outtextxy(297,165,"I");
	outtextxy(297,175,"A");

	/*	  Flag in rocket body		*/
	setcolor(RED);
	rectangle(285,210,315,215);
	setcolor(WHITE);
	rectangle(285,216,315,220);
	setcolor(BLUE);
	circle(300,218,3);
	circle(300,218,2);
	circle(300,218,1);
	setcolor(GREEN);
	rectangle(285,221,315,226);
	setcolor(12);
	outtextxy(284,240,"ISRO");        // Msg print on rocket body
	outtextxy(281,265,"Bnglr");       // - - - - - - - - - - - - -
	setcolor(WHITE);
	line(280,295,270,305);
	line(320,295,330,305);
	line(270,285,270,385);
	line(330,285,330,385);
	line(270,385,280,370);
	line(330,385,320,370);
	outtextxy(280,370,":::::");
	setcolor(19);
	outtextxy(282,290,"=====");
	outtextxy(270,305,"--------");
	setfillstyle(3,5);
	bar3d(260,388,335,420,10,10);     // Stand on which rocket situated
	setcolor(WHITE);
	delay(500);
	outtextxy(40,450,"10");           // counting starts from here ||
	delay(500);                       //			       \/
	outtextxy(80,450,"9");
	delay(500);
	outtextxy(120,450,"8");
	delay(500);
	outtextxy(160,450,"7");
	delay(500);
	outtextxy(200,450,"6");
	delay(500);
	outtextxy(240,450,"5");
	delay(500);
	outtextxy(280,450,"4");
	delay(500);
	outtextxy(320,450,"3");
	delay(500);
	outtextxy(360,450,"2");
	delay(500);
	outtextxy(400,450,"1");
	delay(500);
	outtextxy(440,450,"0");
	delay(100);
	outtextxy(450,450,"::");          // counting ends here
for(i=0;i<=10;i++)                        // looping for color changing
		{
		setcolor(i);
		outtextxy(460,450,"  Program Activated");
		delay(100);
		}
for(i=0;i<=50;i+=2)                       // looping for open lock chain
	{
	rectangle(50,-35,180,390);        // building
	outtextxy(0,400,"Counting");
	line(180,390,230,410);            // link line b/w suporter & building
	line(230,70,230,410);             // suporter
	line(370,70,370,410);             // suporter
	line(300,40,280,70);
	line(300,40,320,70);
	rectangle(280,70,320,110);
	setcolor(6);
	circle(300,90,9);
	setcolor(WHITE);
	line(280,110,290,130);
	line(320,110,310,130);
	line(290,130,310,130);
	line(290,130,290,185);
	line(310,130,310,185);
	line(290,185,310,185);
	line(290,185,280,195);
	line(310,185,320,195);
	line(280,195,280,295);
	line(320,195,320,295);
	/*	  Name of Country	*/
	setcolor(RED);
	outtextxy(297,135,"I");
	outtextxy(297,145,"N");
	outtextxy(297,155,"D");
	outtextxy(297,165,"I");
	outtextxy(297,175,"A");
	/*	  Flag		*/
	setcolor(RED);
	rectangle(285,210,315,215);
	setcolor(WHITE);
	rectangle(285,216,315,220);
	setcolor(BLUE);
	circle(300,218,3);
	circle(300,218,2);
	circle(300,218,1);
	setcolor(GREEN);
	rectangle(285,221,315,226);
	setcolor(12);
	outtextxy(284,240,"ISRO");
	outtextxy(281,265,"Bnglr");
	setcolor(WHITE);
	line(280,295,270,305);
	line(320,295,330,305);
	line(270,285,270,385);
	line(330,285,330,385);
	line(270,385,280,370);
	line(330,385,320,370);
	outtextxy(280,370,":::::");
	setcolor(19);
	outtextxy(282,290,"=====");
	outtextxy(270,305,"--------");
	setfillstyle(3,5);
	bar3d(260,388,335,420,10,10);
	setcolor(WHITE);
	outtextxy(40,450,"10");
	outtextxy(80,450,"9");
	outtextxy(120,450,"8");
	outtextxy(160,450,"7");
	outtextxy(200,450,"6");
	outtextxy(240,450,"5");
	outtextxy(280,450,"4");
	outtextxy(320,450,"3");
	outtextxy(360,450,"2");
	outtextxy(400,450,"1");
	outtextxy(440,450,"0");

	setcolor(WHITE);
	line(230,75,279-i,i+75);
	line(230,76,279-i,i+76);
	delay(100);
	cleardevice();
	}
for(j=0;j<=3500;j=j+10)
	{
	setcolor(WHITE);
	line(230,j+70,230,j+410);             // suporter
	line(370,j+70,370,j+410);             // suporter
	line(300,40,280,70);
	line(300,40,320,70);
	rectangle(280,70,320,110);
	setcolor(6);
	circle(300,90,9);
	setcolor(WHITE);
	line(280,110,290,130);
	line(320,110,310,130);
	line(290,130,310,130);
	line(290,130,290,185);
	line(310,130,310,185);
	line(290,185,310,185);
	line(290,185,280,195);
	line(310,185,320,195);
	line(280,195,280,295);
	line(320,195,320,295);
	/*	  Name of Country	*/
	setcolor(RED);
	outtextxy(297,135,"I");
	outtextxy(297,145,"N");
	outtextxy(297,155,"D");
	outtextxy(297,165,"I");
	outtextxy(297,175,"A");
	/*	  Flag		*/
	setcolor(RED);
	rectangle(285,210,315,215);
	setcolor(WHITE);
	rectangle(285,216,315,220);
	setcolor(BLUE);
	circle(300,218,3);
	circle(300,218,2);
	circle(300,218,1);
	setcolor(GREEN);
	rectangle(285,221,315,226);
	setcolor(12);
	outtextxy(284,240,"ISRO");
	outtextxy(281,265,"Bnglr");
	setcolor(WHITE);
	line(280,295,270,305);
	line(320,295,330,305);
	line(270,285,270,385);
	line(330,285,330,385);
	line(270,385,280,370);
	line(330,385,320,370);
	outtextxy(280,370,":::::");
	setcolor(19);
	outtextxy(282,290,"=====");
	outtextxy(270,305,"--------");
	setfillstyle(3,5);
	bar3d(260,j+388,335,j+420,10,10);
	setcolor(WHITE);
	outtextxy(0,j+400,"Counting");
	outtextxy(40,j+450,"10");
	outtextxy(80,j+450,"9");
	outtextxy(120,j+450,"8");
	outtextxy(160,j+450,"7");
	outtextxy(200,j+450,"6");
	outtextxy(240,j+450,"5");
	outtextxy(280,j+450,"4");
	outtextxy(320,j+450,"3");
	outtextxy(360,j+450,"2");
	outtextxy(400,j+450,"1");
	outtextxy(440,j+450,"0");
	rectangle(50,j+-35,180,j+390);
	if(j==60)
		{
		setcolor(24);
		outtextxy(272,j+330," | | | | ");
		}
	if(j==120)
		{
		setcolor(24);
		outtextxy(270,j+270,"| | | | |");
		}
	if(j==180)
		{
		setcolor(24);
		outtextxy(272,j+210," | | | | ");
		delay(50);
		outtextxy(270,j+240,"| | | | |");
		}
	if(j==240)
		{
		setcolor(24);
		outtextxy(270,j+135," | | | | ");
		delay(50);
		outtextxy(272,j+150,"| | | | |");
		}
	if(j==330)
		{
		setcolor(24);
		outtextxy(273,j+75," | | | | ");
		delay(50);
		outtextxy(271,j+60,"| | | | |");
		}
	if(j==390)
		{
		setcolor(24);
		outtextxy(273,j+10,"| | | | |");
		}
	outtextxy(0,j-1073,"^");
	outtextxy(30,j-2032,"^");
	outtextxy(350,j-1191,"^");
	outtextxy(928,j-2231,"^");
	outtextxy(54,j-961,"^");
	outtextxy(86,j-2943,"^");
	outtextxy(113,j-911,"^");
	outtextxy(149,j-863,"^");
	outtextxy(185,j-1832,"^");
	outtextxy(223,j-791,"^");
	outtextxy(265,j-1741,"^");
	outtextxy(294,j-2997,"^");
	outtextxy(327,j-703,"^");
	outtextxy(388,j-1579,"^");
	outtextxy(405,j-513,"^");
	outtextxy(443,j-1456,"^");
	outtextxy(498,j-657,"^");
	outtextxy(531,j-1497,"^");
	outtextxy(559,j-613,"^");
	circle(230,j-2398,15);
	circle(564,j-2998,20);
	circle(129,j-3441,53);
	if(j==3500)
		{
		gotoxy(300,300);
		printf("\t\n\t\n\n\t      Mars ");
		printf("\t\t\n\n\n\n\n\nMission Successful...");
		break;
		}
	delay(30);
	cleardevice();
	}
	getch();
	}
