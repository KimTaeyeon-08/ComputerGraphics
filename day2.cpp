#include<GL/glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	//glutWireCube(0.4);
	glutWireSphere(0.4, 50, 20);//커질수록 원과 가까워지는 걸 알 수 있다. 곡선 형태 
	glFlush();

}
int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return 0;
}
