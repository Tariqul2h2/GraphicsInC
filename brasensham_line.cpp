#include <stdio.h>
#include <stdlib.h>
//#include <GL/glut.h>


#define drawOneLine(x1,y1,x2,y2)  glBegin(GL_LINES);  \
   glVertex2f ((x1),(y1)); glVertex2f ((x2),(y2)); glEnd();

void init(void)
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
   glPointSize(2);
}

void display(void)
{
   int i;
   int j;
   glColor3f (1.0, 1.0, 1.0);
   glBegin(GL_POINTS);
   int x,y,x1,y1,x2,y2,dx,dy,dt,ds,d;
   printf("please enter x1=");
   scanf("%d",&x1);
   printf("please enter y1=");
   scanf("%d",&y1);
   printf("please enter x2=");
   scanf("%d",&x2);
   printf("please enter y2=");
   scanf("%d",&y2);
   x=x1;
   y=y1;
   dx=x2-x1;
   dy=y2-y1;
   dt=2*(dy-dx);
   ds=2*dy;
   d=2*dy-dx;
   glVertex2i(x,y);
   while(x<x2)
   {
	   x++;
	   if(d<0)
		   d=d+ds;
	   else
	   {
		   y++;
		   d=d+dt;
	   }
	   glVertex2i(x,y);
   }
   glEnd();
   glFlush ();
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluOrtho2D (0.0, (GLdouble) w, 0.0, (GLdouble) h);
}

void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 27:
         exit(0);
         break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (400,300);
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutMainLoop();
   return 0;
}
