#include<GL/glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	//4���� ���� ������ �簢��
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);//���� ���� �ﰢ�� ����
	glEnd();
	glFlush();

}
int main(int argc, char*argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}