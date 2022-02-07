//2주차 복습 
#include<GL/glut.h>
#define _WINDOW_HEIGHT 300
#define _WINDOW_WIDTH 300
void reshape(int width,int height) {
	glViewport(0, 0, width, height);//viewport를 너비와 같이 같이 커지기 
	//윈도우 사이즈와 관계없이 같이 똑같이 보여졌으면 좋겠다
	//내가 어디서 부터 어디 까지 볼래 glOrtho()
	GLfloat f_w = (GLfloat)width / (GLfloat)_WINDOW_WIDTH;
	GLfloat f_h = (GLfloat)height / (GLfloat)_WINDOW_HEIGHT;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0*f_w, 1.0*f_w, -1.0*f_h, 1.0*f_h, -1, 1);
}
void display() {
	//viewport 나눌 수 있다. 
	glClear(GL_COLOR_BUFFER_BIT);//화면 지워주기

	glutWireSphere(0.3, 15, 15);

	glFlush();
}
int main(int argc, char** argv) {//뒤에 뭐 붙여도 정상적으로 돌아갈 수 있게! 
	glutInit(&argc, argv);//gl초기화
	glutInitDisplayMode(GLUT_RGB);
	glutCreateWindow("TITLE");
	glutInitWindowSize(_WINDOW_WIDTH, _WINDOW_HEIGHT);
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}
