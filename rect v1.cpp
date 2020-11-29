#include<graphics.h>
#include<conio.h>

int main()
{
    initwindow(600,600,"GRAPHICS LAB");
    setcolor(GREEN);
    outtextxy(15,15,"Md. Tariqul Hasan");
   // setlinestyle(5,50,10);

   /** line(300,300,400,300);
    line(300,300,300,250);
    line(300,250,400,250);
    line(400,250,400,300);*/
    int x,y;
    //setcolor(RED);
    x = getmaxx()/2;
    y = getmaxy()/2;

    while(true)
    {
    //setlinestyle(5,1,10);
    setcolor(rand());





    //circle(100,50,rand());
    delay(1000);
    rectangle(x,y,x+100,y-60);
    delay(500);
    line(x,y,x+100,y);
    delay(500);
    line(x,y,x+50,y-50);
    delay(500);
    line(x+100,y,x+50,y-50);

    }







    getch();
    closegraph();
    return 0;
}
