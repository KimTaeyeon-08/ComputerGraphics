#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
int mode = 0;
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);//컬러버퍼에 초기화 색을 가함
	glColor3f(0.5, 0.5, 0.5);//회색
	if (mode == 0) {
		glBegin(GL_POLYGON);
		glVertex3f(-0.5, -0.5, 0.0);//좌하단 
		glVertex3f(0.5, -0.5, 0.0);//우하단 
		glVertex3f(0.5, 0.5, 0.0);//우상단 
		glVertex3f(-0.5, 0.5, 0.0);//좌상단
		glEnd();
	}
	else if (mode == 1) glutSolidTeapot(0.6);
	glFlush();
}
void MyKeyboard(unsigned char KeyPressed, int X, int Y) {
	switch (KeyPressed)
	{
	case 'a':
		mode += 1; break;
	case 'Q':
		exit(0); break;
	case 'q':
		exit(0); break;
	case 27://esc아스키 코드 값 
		exit(0); break;

	}
	glutPostRedisplay();
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
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGl Day2");
	glClearColor(1.0, 1.0, 1.0, 1.0);//초기화 색은 백색

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

	//콜백 함수 등록 
	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutReshapeFunc(MyReshape);
	glutMainLoop();
	return 0;
}
