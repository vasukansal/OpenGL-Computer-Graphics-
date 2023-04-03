#include <stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,1,0);
    glBegin(GL_POINTS);
    int x1,y1,x2,y2;
    x1=9;
    y1=18;
    x2=14;
    y2=22;
    int pk=(2*(y2-y1))-(x2-x1);
    int xb,yb;
    xb=x1;
    yb=y1;
    glVertex2f(xb,yb);
    while(xb<=x2 && yb<=y2){
        if(pk>=0){
            pk=pk+2*(y2-y1)-2*(x2-x1);
            xb=xb+1;
            yb=yb+1;
        }
        else if(pk<0){
            pk=pk+2*(y2-y1);
            xb=xb+1;
            yb=yb;
        }
        glVertex2f(xb,yb);
    }
    glVertex2f(x2,y2);
    glEnd();
    glFlush();

}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(300,300);
    glutCreateWindow("Bresenhem BY YAMI");
    gluOrtho2D(-30,30,-30,30);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}