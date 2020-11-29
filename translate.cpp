#include<graphics.h>
#include<stdio.h>
#include<conio.h>



void scalling()
{
    double x1,y1,x2,y2,x3,y3,sx,sy;
    printf("Enter X1 and Y1 ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter X2 and Y2 ");
    scanf("%lf %lf",&x2,&y2);
    printf("Enter X3 and Y3 ");
    scanf("%lf %lf",&x3,&y3);


    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    printf("Enter Scaling factor ");
    scanf("%lf %lf",&sx,&sy);
    setcolor(RED);
    x1 = x1 * sx;
    y1 = y1 * sy;
    x2 = x2 * sx;
    y2 = y2 * sy;
    x3 = x3 * sx;
    y3 = y3 * sy;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
}
void reducing()
{
    double x1,y1,x2,y2,x3,y3,sx,sy;
    printf("Enter X1 and Y1 ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter X2 and Y2 ");
    scanf("%lf %lf",&x2,&y2);
    printf("Enter X3 and Y3 ");
    scanf("%lf %lf",&x3,&y3);


    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    printf("Enter Scaling factor ");
    scanf("%lf %lf",&sx,&sy);
    setcolor(RED);
    x1 = x1 * sx;
    y1 = y1 * sy;
    x2 = x2 * sx;
    y2 = y2 * sy;
    x3 = x3 * sx;
    y3 = y3 * sy;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
}





int main()
{
    initwindow(600,600,"GRAPHICS LAB");
    setcolor(GREEN);
    outtextxy(15,15,"Md. Tariqul Hasan");
    int a;
    while(true)
    {
        printf("Press 1 for zoom in and press 2 for zoom out\n");
        scanf("%d",&a);
        if(a == 1)
        {
            scalling();
        }
        if(a == 2)
        {
            reducing();
        }

    }


    /*
    double x1,y1,x2,y2,x3,y3,sx,sy;
    printf("Enter X1 and Y1 ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter X2 and Y2 ");
    scanf("%lf %lf",&x2,&y2);
    printf("Enter X3 and Y3 ");
    scanf("%lf %lf",&x3,&y3);


    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    printf("Enter Scaling factor ");
    scanf("%lf %lf",&sx,&sy);
    setcolor(RED);
    x1 = x1 * sx;
    y1 = y1 * sy;
    x2 = x2 * sx;
    y2 = y2 * sy;
    x3 = x3 * sx;
    y3 = y3 * sy;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    */

//    setcolor(YELLOW);
//    x1 = x1 * sx;
//    y1 = y1 * sy;
//    x2 = x2 * sx;
//    y2 = y2 * sy;
//    x3 = x3 * sx;
//    y3 = y3 * sy;
//
//    line(x1,y1,x2,y2);
//    line(x1,y1,x3,y3);
//    line(x2,y2,x3,y3);






    getch();
    closegraph();
    return 0;


}
