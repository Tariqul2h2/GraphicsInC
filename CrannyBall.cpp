#include<stdio.h>
#include<graphics.h>
int main(){

    /************  To initializing graphical window  ***********/
    bool dbflag= false,closeflag=true;
    initwindow(1000,800,"My Game",0, 0, dbflag, closeflag);
    /************  Drawing rectangle  ************/
  setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
 /***  drawing pointer ***/
   setcolor(15);
circle(475,450,16);
line(485,450,495,450);
line(465,450,455,450);
line(475,440,475,430);
line(475,460,475,470);
/** moving pointer **/
char ch;
int a=0,b=0;
for(;a<=1000&&b<=800;){
    if(ch=='u'){
        b=b+10;
    }
        if(ch=='d'){
            b=b-10;
        }
        if(ch=='l'){
            a=a-10;
        }
        if(ch=='r'){
            a=a+10;
        }
        setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
 setcolor(15);
     circle(475+a,450-b,16);
        line(485+a,450-b,495+a,450-b);
line(465+a,450-b,455+a,450-b);
line(475+a,440-b,475+a,430-b);
line(475+a,460-b,475+a,470-b);
ch=getch();
cleardevice();
}
/** moving circle **/
int  i=1;
  //int a;
  a=0;
  while(i<=6){
    if(i==1){setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
            setcolor(0);
    circle(850,355,45);
circle(850,355,44);
circle(850,355,43);
        setcolor(14);
  circle(100,355,45);setcolor(14);
  circle(100,355,44);setcolor(14);
  circle(100,355,43);
        i++;
    }
        if(i==2){setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
                setcolor(0);
  circle(100,355,45);
circle(100,355,44);
circle(100,355,43);
            setcolor(14);
            circle(250,205,45);setcolor(14);
            circle(250,205,44);setcolor(14);
            circle(250,205,43);
            i++;


        }
        if(i==3){setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
                if(a==30000){
                    break;
                }
                setcolor(0);
                circle(250,205,45);circle(250,205,44);circle(250,205,43);

            setcolor(14);
            circle(400,55,45);
           setcolor(14);
            circle(400,55,44);setcolor(14);
            circle(400,55,43);
            i++;
        }
        if(i==4){setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
            setcolor(0);
            circle(400,55,45);circle(400,55,44);circle(400,55,43);
            setcolor(14);
            circle(550,55,45);
            setcolor(14);
            circle(550,55,44);setcolor(14);
            circle(550,55,43);
            i++;

        }
        if(i==5){setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
                setcolor(0);
            circle(550,55,45);circle(550,55,44);circle(550,55,43);

            setcolor(14);
            circle(700,205,45);
            setcolor(14);
            circle(700,205,44);setcolor(14);
            circle(700,205,43);

            i++;
        }
        if(i==6){setcolor(2);
  rectangle(50,400,150,500);
  rectangle(200,250,300,350);
  rectangle(350,100,450,200);
  rectangle(500,100,600,200);
  rectangle(650,250,750,350);
  rectangle(800,400,900,500);
bar(500,550,510,710);
 bar(490,568,500,710);
            setcolor(0);
            circle(700,205,45); circle(700,205,44);circle(700,205,43);
            setcolor(14);
            circle(850,355,45);
            setcolor(14);
            circle(850,355,45);setcolor(14);
            circle(850,355,45);
            i=1;
            a++;
        }


  }

  getch();
 return 0;
}
