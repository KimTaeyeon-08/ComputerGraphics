#include<GL/glut.h>
#include<GL/gl.h>
#include<GL/glu.h>

//#define _WINDOW_WIDTH 600
//#define _WINDOW_HEIGHT 500
void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);//�÷����ۿ� �ʱ�ȭ ���� ����
	glColor3f(0.5, 0.5, 0.5);//ȸ��
	glBegin(GL_POLYGON);//�簢��
		glVertex3f(-0.5, -0.5, 0.0);//���ϴ� 
		glVertex3f(0.5, -0.5, 0.0);//���ϴ� 
		glVertex3f(0.5, 0.5, 0.0);//���� 
		glVertex3f(-0.5, 0.5, 0.0);//�»��
	glEnd();
	glFlush();
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
	//glutInitWindowSize(_WINDOW_WIDTH, _WINDOW_HEIGHT);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("OpenGl Example Drawing");
	glClearColor(1.0, 1.0, 1.0, 1.0);//�ʱ�ȭ ���� ���
	glutDisplayFunc(MyDisplay);
	glutReshapeFunc(MyReshape);
	glutMainLoop();
	return 0;
}