#include <stdio.h>
#include <graphics.h>
#include<direct.h>
#include <graphics.h>
#include <unistd.h>
#include<graphics.h>
#include "conio2.h"

int main() {
    int gd = DETECT, gm;
    char temp_name[20];
    while(1){
            system("cls");
    puts("\n\t\t\tWELCOME TO QUIZ GAME ARENA\n\t\t\t[created by BIM I Semester HSMSS]");
    printf("___________________________________________________________________________________\n");

    printf("\n___________________________________________________________________________________\n");
    puts("\n1. Moving Car\n2. Bouncing Ball \n3. Colorful star\n4. Rainbow\n5. Rocket launch\n6. Exit");
    int choice;
    puts("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:{
        int i, maxx, midy;

        /* initialize graphic mode */
        initgraph(&gd,&gm, " ");

        /* maximum pixel in horizontal axis */
        maxx = getmaxx();
        /* mid pixel in vertical axis */
        midy = getmaxy()/2;

        for (i=0; i < maxx-150; i=i+5) {
            /* clears screen */
            cleardevice();

            /* draw a white road */
            setcolor(WHITE);
            line(0, midy + 37, maxx, midy + 37);

            /* Draw Car */
            setcolor(YELLOW);
            setfillstyle(SOLID_FILL, RED);
            line(i, midy + 23, i, midy);
            line(i, midy, 40 + i, midy - 20);
            line(40 + i, midy - 20, 80 + i, midy - 20);
            line(80 + i, midy - 20, 100 + i, midy);
            line(100 + i, midy, 120 + i, midy);
            line(120 + i, midy, 120 + i, midy + 23);
            line(0 + i, midy + 23, 18 + i, midy + 23);
            arc(30 + i, midy + 23, 0, 180, 12);
            line(42 + i, midy + 23, 78 + i, midy + 23);
            arc(90 + i, midy + 23, 0, 180, 12);
            line(102 + i, midy + 23, 120 + i, midy + 23);
            line(28 + i, midy, 43 + i, midy - 15);
            line(43 + i, midy - 15, 57 + i, midy - 15);
            line(57 + i, midy - 15, 57 + i, midy);
            line(57 + i, midy, 28 + i, midy);
            line(62 + i, midy - 15, 77 + i, midy - 15);
            line(77 + i, midy - 15, 92 + i, midy);
            line(92 + i, midy, 62 + i, midy);
            line(62 + i, midy, 62 + i, midy - 15);
            floodfill(5 + i, midy + 22, YELLOW);
            setcolor(BLUE);
            setfillstyle(SOLID_FILL, DARKGRAY);
            /*  Draw Wheels */
            circle(30 + i, midy + 25, 9);
            circle(90 + i, midy + 25, 9);
            floodfill(30 + i, midy + 25, BLUE);
            floodfill(90 + i, midy + 25, BLUE);
            /* Add delay of 0.1 milli seconds */
            // this is for making car run faster or slower
            delay(100);
        }

        getch();
        closegraph();
        break;
        }

    case 2:
        {
                int i, x, y, flag=0;
     initgraph(&gd, &gm, "");

     /* get mid positions in x and y-axis */
     x = getmaxx()/2;
     y = 30;


     while (!kbhit()) {
      if(y >= getmaxy()-30 || y <= 30)
         flag = !flag;
         /* draws the gray board */
         setcolor(RED);
         setfillstyle(SOLID_FILL, RED);
         circle(x, y, 30);
         floodfill(x, y, RED);

     /* delay for 50 milli seconds */
     delay(50);

     /* clears screen */
     cleardevice();
     if(flag){
         y = y + 5;
     } else {
         y = y - 5;
     }
        }

        getch();
        closegraph();
        break;

    }
    case 3:{
         int gdriver = DETECT, gmode, err;
        int i, midx, midy;

        /* initialize graphic mode */
        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");
        err = graphresult();

        if (err != grOk) {
                /* error occurred */
                printf("Graphics Error: %s\n",
                                grapherrormsg(err));
                return 0;
        }

        /* center position of the star */
        midx = getmaxx() / 2;
        midy = getmaxy() / 2;

        /*
         * draw a star and fill with different
         * colors to get twinkling effect
         */
        for (i = 1; i <= 15; i++) {
                if (i == DARKGRAY)
                        continue;

                setcolor(i);
                setfillstyle(SOLID_FILL, i);

                /* top portion of star */
                line(midx, midy - 100, midx + 30, midy);
                line(midx, midy - 100, midx, midy + 30);
                line(midx + 30, midy, midx, midy + 30);
                floodfill(midx + 1, midy + 1, i);

                setcolor(DARKGRAY);
                setfillstyle(SOLID_FILL, DARKGRAY);
                line(midx + 30, midy, midx + 140, midy);
                line(midx + 30, midy, midx, midy + 30);
                line(midx + 140, midy, midx, midy + 30);
                floodfill(midx + 31, midy + 1, DARKGRAY);

                /* right portion of star */
                setcolor(i);
                setfillstyle(SOLID_FILL, i);
                line(midx + 140, midy, midx, midy + 30);
                line(midx + 140, midy, midx + 40, midy + 50);
                line(midx + 40, midy + 50, midx, midy + 30);
                floodfill(midx  + 40, midy + 48, i);

                setcolor(DARKGRAY);
                setfillstyle(SOLID_FILL, DARKGRAY);
                line(midx + 40, midy + 50, midx, midy + 30);
                line(midx + 40, midy + 50, midx + 110, midy + 160);
                line(midx + 110, midy + 160, midx, midy + 30);
                floodfill(midx + 40, midy + 51, DARKGRAY);

                /* bottom right portion of star */
                setcolor(i);
                setfillstyle(SOLID_FILL, i);
                line(midx + 110, midy + 160, midx, midy + 30);
                line(midx + 110, midy + 160, midx, midy + 90);
                line(midx, midy + 90, midx, midy + 30);
                floodfill(midx + 1, midy + 90, i);
                setcolor(DARKGRAY);
                setfillstyle(SOLID_FILL, DARKGRAY);
                line(midx, midy + 90, midx, midy + 30);
                line(midx, midy + 30, midx - 110, midy + 160);
                line(midx - 110, midy + 160, midx, midy + 90);
                floodfill(midx - 1, midy + 90, DARKGRAY);

                /* bottom left portion of star */
                setcolor(i);
                setfillstyle(SOLID_FILL, i);
                line(midx, midy + 30, midx - 110, midy + 160);
                line(midx - 40, midy + 50, midx - 110, midy + 160);
                line(midx - 40, midy + 50, midx, midy + 30);
                floodfill(midx - 38, midy + 50, i);

                setcolor(DARKGRAY);
                setfillstyle(SOLID_FILL, DARKGRAY);
                line(midx - 40, midy + 50, midx, midy + 30);
                line(midx - 140, midy, midx - 40, midy + 50);
                line(midx - 140, midy, midx, midy + 30);
                floodfill(midx - 40, midy + 48, DARKGRAY);

                /* left portion of star */
                setcolor(i);
                setfillstyle(SOLID_FILL, i);
                line(midx - 30, midy, midx - 140, midy);
                line(midx - 140, midy, midx, midy + 30);
                line(midx - 30, midy, midx, midy + 30);
                floodfill(midx - 30, midy + 1, i);

                setcolor(DARKGRAY);
                setfillstyle(SOLID_FILL, DARKGRAY);
                line(midx - 30, midy, midx, midy + 30);
                line(midx, midy - 100, midx - 30, midy);
                line(midx, midy - 100, midx, midy + 30);
                floodfill(midx - 28, midy, DARKGRAY);

                /* sleep for 1 seconds */
                sleep(1);
        }

        getch();

        /* deallocate memory allocated for graphic screen */
        closegraph();
        break;

    }




    case 4:
{


int x, y, i;

initgraph(&gd,&gm," ");

// message

printf("\nThis is a Rainbow");

//for background color
setbkcolor(BLUE+WHITE);

//finding centre x-ordinate of screen

x = getmaxx() / 2;

//finding centre y-ordinate of screen
y = getmaxy() / 2;

for (i=30; i<200; i++)
{

delay(100);

// select color for making of rainbow
setcolor(i/10);

//arc making with fixed centre and increasing radius
arc(x, y, 0, 180, i-10);
}
getch();
closegraph();
break;
}




    case 5:
        {



        gotoxy(300,350);
	printf("\n\n\n\n\n\n");
	printf("\n\t\t\t   //---------------------||		");
	gotoxy(300,360);
	printf("\n\t\t\t   || Program Loading.... ||		");
	gotoxy(300,370);
	printf("\n\t\t\t   ||---------------------//		");
	gotoxy(550,450);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t");
	printf("\n\t\t\t\t\t\tBIM FROM HSMSS");
	delay(4000);
	int i, j;
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
	outtextxy(297,135,"N");
	outtextxy(297,145,"E");
	outtextxy(297,155,"P");
	outtextxy(297,165,"A");
	outtextxy(297,175,"L");

	/*	  Flag in rocket body		*/
	line(100, 100, 170, 150);
    line(100, 150, 170, 150);
    line(100, 150, 170, 200);
    line(100, 200, 170, 200);
    //setcolor(BLUE);
    line(100,100,100,250);
    setcolor(WHITE);

    circle(130,185,10);
    arc(130, 130, 180, 0, 10);


	setcolor(12);
	outtextxy(284,240,"HSM");        // Msg print on rocket body
	outtextxy(281,265," BIM");       // - - - - - - - - - - - - -
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
	outtextxy(297,135,"N");
	outtextxy(297,145,"E");
	outtextxy(297,155,"P");
	outtextxy(297,165,"A");
	outtextxy(297,175,"L");
	/*	  Flag		*/
	line(100, 100, 170, 150);
    line(100, 150, 170, 150);
    line(100, 150, 170, 200);
    line(100, 200, 170, 200);
    //setcolor(BLUE);
    line(100,100,100,250);
    setcolor(WHITE);
    circle(130,185,10);
    arc(130, 130, 180, 0, 10);

	setcolor(12);
	outtextxy(284,240,"HSM");
	outtextxy(281,265,"BIM");
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
	outtextxy(297,135,"N");
	outtextxy(297,145,"E");
	outtextxy(297,155,"P");
	outtextxy(297,165,"A");
	outtextxy(297,175,"L");
	/*	  Flag		*/
	setcolor(RED);
	//rectangle(285,210,315,215);
	setcolor(WHITE);
	//rectangle(285,216,315,220);
	setcolor(BLUE);
	//circle(300,218,3);
	//circle(300,218,2);
	//circle(300,218,1);
	setcolor(GREEN);
	//rectangle(285,221,315,226);
	setcolor(12);
	outtextxy(284,240,"HSM");
	outtextxy(281,265,"BIM");
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
	setcolor(RED); // for mars color
	outtextxy(135,j-3441,"MARS");
	circle(129,j-3441,53);
	if(j==3500)
		{
		gotoxy(200,200);
		printf("\t\n\t\n\n\t      Mars");
		printf("\t\t\n\n\n\n\n\nMission Successful...");
		break;
		}
	delay(30);
	cleardevice();
	}
	getch();
	closegraph();
    break;
    }
    }
}
    //switch
 return 0;
}

