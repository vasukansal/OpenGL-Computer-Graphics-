#include<GL/freeglut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_TRIANGLES);
		glColor3f(1,1,1);
		glVertex2f(-0.7, -0.7);
		glVertex2f(0.7, -0.7);
		glVertex2f(0, 0.7);
	glEnd();
		
	glColor3f(0.0,0.0,0.0);
	glRasterPos2f(-0.155,-0.16);
	glutBitmapString(GLUT_BITMAP_HELVETICA_18, (unsigned char*)("VASU"));
	
	glFlush();
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	
	glutInitWindowPosition(300,200);
	glutInitWindowSize(500,500);
	
	glutCreateWindow("Text");
	
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}