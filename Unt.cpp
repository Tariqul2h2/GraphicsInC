#include<graphics.h>
#include<conio.h>

int main()
{
    initwindow(720,720,"GRAPHICS LAB");
    setcolor(GREEN);
    outtextxy(15,15,"Md. Tariqul Hasan");

    line(20,420,700,420);
    outtextxy(5,420,"-X");
    outtextxy(705,415,"X");
    line(20,420,30,410); ///arrow right
    line(20,420,30,430); ///arrow right
    line(700,420,690,410); ///arrow left
    line(700,420,690,430); ///arrow left
    outtextxy(200,20,"Y");
    outtextxy(200,680,"-Y");
    line(230,10,230,690);
    line(230,10,240,20);
    line(230,10,220,20);
    line(230,690,240,680);
    line(230,690,220,680);


    //circle(230,420,20);
    while(true)
    {

    setfillstyle(SOLID_FILL,rand());
    delay(100);

    outtextxy(260,130,"COL-1");
    bar3d(260,150,290,420,5,20); ///bar 1
    setfillstyle(SOLID_FILL,rand());
    outtextxy(310,160,"COL-2");
    bar3d(310,180,340,420,5,20);
    setfillstyle(SOLID_FILL,rand());
    outtextxy(360,190,"COL-3");
    bar3d(360,210,390,420,5,20);
    setfillstyle(SOLID_FILL,rand());
    outtextxy(410,220,"COL-4");
    bar3d(410,240,440,420,5,20);
    setfillstyle(SOLID_FILL,rand());
    outtextxy(460,250,"COL-5");
    bar3d(460,270,490,420,5,20);
    setfillstyle(SOLID_FILL,rand());
    outtextxy(510,270,"COL-6");
    bar3d(510,290,540,420,5,20);

    }
    //while(true){ bar(rand()%260,rand()%150,rand()%290,rand()%420);}



   // bar(8*30,5*30,8*30,17*30);



   // line(700,10,220,10);
   // line())





    getch();
    closegraph();
    return 0;
}
