#include<graphics.h>
#include<conio.h>

int main()
{
    initwindow(720,720,"GRAPHICS LAB");
    setcolor(GREEN);
    outtextxy(15,15,"Md. Tariqul Hasan");


    int a = getmaxx();
    int b = getmaxy();
    int r = 300;
    int in = 0;
    while(true)
    {
        setcolor(rand());
        circle(a/2,b/2,r--);
        if(r<155){break;}
        delay(10);
        setcolor(rand());
        circle(a/2,b/2,in++);
        if(in>145) {break;}
        delay(10);

    }

    ///circle(getmaxx()/2,getmaxy()/2,50);


  //  circle(a/2,b/2,20);
    //circle(getmaxx()/2,getmaxy()/2,50);
    //bar3d()

    getch();
    closegraph();
    return 0;

}
