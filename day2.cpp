#include<GL/glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	//glutWireCube(0.4);
	glutWireSphere(0.4, 50, 20);//Ŀ������ ���� ��������� �� �� �� �ִ�. � ���� 
	glFlush();

}
int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}
