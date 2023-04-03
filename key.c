#include<GL/gl.h>
#include<GL/glut.h>
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.5,0);
    glVertex2f(-0.5,0);
    glVertex2f(0,0.5);
    glEnd();
    glFlush();

}
void keyy(unsigned char key, int x, int y){
    if(key=='g'){
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0,1,0);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.5,0);
        glVertex2f(-0.5,0);
        glVertex2f(0,0.5);
        glEnd();
        glFlush();
    }
    else if(key=='r'){
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1,0,0);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.5,0);
        glVertex2f(-0.5,0);
        glVertex2f(0,0.5);
        glEnd();
        glFlush();
    }
    else if(key=='b'){
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0,0,1);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.5,0);
        glVertex2f(-0.5,0);
        glVertex2f(0,0.5);
        glEnd();
        glFlush();
    }
    else{
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(0,0,0);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.5,0);
        glVertex2f(-0.5,0);
        glVertex2f(0,0.5);
        glEnd();
        glFlush();
    }
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("KEY COLOR CHANGE!!");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyy);
    glutMainLoop();
    return 0;
}