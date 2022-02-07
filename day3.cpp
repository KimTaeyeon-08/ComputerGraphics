//2주차 복습
//gl 프로그램 기본 구조 
#include<GL/glut.h>
void display() {
	glClear(GL_COLOR_BUFFER_BIT);//화면 지워주기
	
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
