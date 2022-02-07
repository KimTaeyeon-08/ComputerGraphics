//2주차 복습
//viewport분할 
#include<GL/glut.h>
void display() {
	//viewport 나눌 수 있다. 
	glClear(GL_COLOR_BUFFER_BIT);//화면 지워주기

	glViewport(0, 0, 100, 100);//왼쪽 아래로 보여짐 
	glutWireSphere(0.3, 15, 15);

	glViewport(0, 100, 100, 100);//왼쪽 중간으로 로 보여짐 
	glutWireSphere(0.3, 15, 15);

	glViewport(199, 100, 100, 100);//중간으로 로 보여짐 
	glutWireSphere(0.3, 15, 15);

	glFlush();
}
int main(int argc, char** argv) {//뒤에 뭐 붙여도 정상적으로 돌아갈 수 있게! 
	glutInit(&argc, argv);//gl초기화
	glutInitDisplayMode(GLUT_RGB);
	glutCreateWindow("TITLE");
	//display설정
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
