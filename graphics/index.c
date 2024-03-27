#include <stdio.h>
#include <graphics.h>
void main()
{
    int gd = DETECT, gm, errcode;
    initgraph(&gd, &gm, "C:/TURBOC3/BGI");
    errcode = graphresult();
    if (errcode != grOk)
    {
        printf("\n Graphics Initilization faild");
        exit(1);
    }
    setcolor(GREEN);
    line(0, 50, 200, 300);
    getch();
    closegraph();
}
// putpixeel(int x, int y, int color);
// int_variable = (int x, int y);