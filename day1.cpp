#include<GL/glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	//4가지 점을 가지는 사각형
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);//한줄 빼면 삼각형 나옴
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