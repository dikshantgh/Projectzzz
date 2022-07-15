#include <stdio.h>
#include <graphics.h>
#include<direct.h>

int main() {
    int gd = DETECT, gm;
    int choice;
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
     initgraph(&gd, &gm, "C:\\TC\\BGI");

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

    }
    }
    return 0;
}
