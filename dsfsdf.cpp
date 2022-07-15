// C program for the above approach

#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
int main()
{
    // Initialize of gdriver with
    // DETECT macros
    int gd=DETECT, gm;
    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, BROWN);
    rectangle(50, 50, 70, 50);

    // Rocket body
    floodfill(52, 48, 15);
    line(0, 50, 50, 50);

    // Land outline
    setfillstyle(SOLID_FILL, WHITE);
    line(650, 450, 700, 450);
    line(650, 450, 675, 350);
    line(675, 350, 700, 450);

    // Rocket head
    floodfill(52, 48, 15);
    setfillstyle(SOLID_FILL, BLUE);
    line(50, 50, 65, 45);
    line(62, 50, 65, 50);
    line(62, 50, 65, 45);

    // Rocket left up wing
    floodfill(648, 498, 15);
    setfillstyle(SOLID_FILL, BLUE);
    line(700, 450, 700, 500);
    line(725, 500, 700, 500);
    line(700, 450, 725, 500);

    // Rocket right up wing
    floodfill(702, 498, 15);
    setfillstyle(SOLID_FILL, BLUE);
    line(625, 650, 650, 650);
    line(650, 575, 650, 650);
    line(625, 650, 650, 575);

    // Rocket left down wing
    floodfill(627, 648, 15);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(627, 698, 15);

    setfillstyle(SOLID_FILL, BLUE);
    line(725, 650, 700, 650);
    line(700, 575, 700, 650);
    line(725, 650, 700, 575);

    // Rocket right down wing
    floodfill(702, 648, 15);
    line(0, 650, 1500, 650);

    // Draw the land with green color
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(627, 698, 15);
    getch();

    // Close the initialized gdriver
    closegraph();
    return 0;
}
