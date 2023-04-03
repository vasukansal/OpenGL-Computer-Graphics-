#include <stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,1,0);
    glBegin(GL_POINTS);
    int x,y;
    x=0;
    int r=10;
    
    y=r;
    int pk=1-r;
    while(x<=y){
        if(pk<0){
            pk=pk+(2*x)+1;
            x=x+1;
            y=y;
        }
        else if (pk>=0){
            pk=pk+(2*x)+1-(2*y);
            x=x+1;
            y=y-1;
        }
        glVertex2f(x,y);
        glVertex2f((-x),y);
        glVertex2f((-x),(-y));
        glVertex2f(x,(-y));
        glVertex2f(y,x);
        glVertex2f((-y),x);
        glVertex2f((-y),(-x));
        glVertex2f(y,(-x));

    }
    glEnd();
    glFlush();

}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(300,300);
    glutCreateWindow("MIDPOINT CIRCLE BY YAMI");
    gluOrtho2D(-15,15,-15,15);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}