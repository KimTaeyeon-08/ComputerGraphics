#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>

//#define _WINDOW_WIDTH 600
//#define _WINDOW_HEIGHT 500
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);//컬러버퍼에 초기화 색을 가함
	glColor3f(0.5, 0.5, 0.5);//회색
	glBegin(GL_POLYGON);//사각형
		glVertex3f(-0.5, -0.5, 0.0);//좌하단 
		glVertex3f(0.5, -0.5, 0.0);//우하단 
		glVertex3f(0.5, 0.5, 0.0);//우상단 
		glVertex3f(-0.5, 0.5, 0.0);//좌상단
	glEnd();
	glFlush();
}
void MyReshape(int NewWidth, int NewHeight) {
	glViewport(0, 0, NewWidth, NewHeight);
	GLfloat widthFactor = (GLfloat)NewWidth / (GLfloat)300; //기준이 300 
	//GLfloat widthFactor = (GLfloat)NewWidth / (GLfloat)_WINDOW_WIDTH;
	GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)300;
	//GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)_WINDOW_HEIGHT;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0 * widthFactor, 1.0 * widthFactor, -1.0 * HeightFactor, 1.0 * HeightFactor, -1.0, 1.0);//어느 부분을 어떻게 볼 것인가 
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(300, 300);
	//glutInitWindowSize(_WINDOW_WIDTH, _WINDOW_HEIGHT);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGl Example Drawing");
	glClearColor(1.0, 1.0, 1.0, 1.0);//초기화 색은 백색
	glutDisplayFunc(MyDisplay);
	glutReshapeFunc(MyReshape);
	glutMainLoop();
	return 0;
}