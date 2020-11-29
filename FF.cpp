#include<conio.h>
#include<graphics.h>
#include<stdio.h>
void floodFill(int x, int y, int old, int fill)
{
 int current;
 current=getpixel(x,y);
 if(current==old)
 {
  putpixel(x,y,fill);
  delay(.5);
  floodFill(x+1,y,old,fill);
  floodFill(x-1,y,old,fill);
  floodFill(x, y+1,old,fill);
  floodFill(x,y-1,old,fill);
  floodFill(x+1,y+1,old,fill);
  floodFill(x-1,y+1,old,fill);
  floodFill(x-1,y-1,old,fill);
  floodFill(x+1,y-1,old,fill);
 }
}
int main()
{
    initwindow(955,600,"FLOOD FILL");
    int o=0;
    rectangle(150,150,450,300);
    floodFill(300,225,o,4);

    getch();
}
