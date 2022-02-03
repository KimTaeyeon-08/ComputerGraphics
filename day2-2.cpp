#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>
int mode = 0;
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);//�÷����ۿ� �ʱ�ȭ ���� ����
	glColor3f(0.5, 0.5, 0.5);//ȸ��
	if (mode == 0) {
		glBegin(GL_POLYGON);
		glVertex3f(-0.5, -0.5, 0.0);//���ϴ� 
		glVertex3f(0.5, -0.5, 0.0);//���ϴ� 
		glVertex3f(0.5, 0.5, 0.0);//���� 
		glVertex3f(-0.5, 0.5, 0.0);//�»��
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
	case 27://esc�ƽ�Ű �ڵ� �� 
		exit(0); break;

	}
	glutPostRedisplay();
}
void MyReshape(int NewWidth, int NewHeight) {
	glViewport(0, 0, NewWidth, NewHeight);
	GLfloat widthFactor = (GLfloat)NewWidth / (GLfloat)300; //������ 300 
	//GLfloat widthFactor = (GLfloat)NewWidth / (GLfloat)_WINDOW_WIDTH;
	GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)300;
	//GLfloat HeightFactor = (GLfloat)NewHeight / (GLfloat)_WINDOW_HEIGHT;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0 * widthFactor, 1.0 * widthFactor, -1.0 * HeightFactor, 1.0 * HeightFactor, -1.0, 1.0);//��� �κ��� ��� �� ���ΰ� 
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(300, 300);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGl Day2");
	glClearColor(1.0, 1.0, 1.0, 1.0);//�ʱ�ȭ ���� ���

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

	//�ݹ� �Լ� ��� 
	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyboard);
	glutReshapeFunc(MyReshape);
	glutMainLoop();
	return 0;
}
