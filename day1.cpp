#include<GL/glut.h>

void mydisplay() {
	glClear(GL_COLOR_BUFFER_BIT);//화면 clear 화면 지워주기 그전의 것을 지워주기 , 애니메이션 같은 경우 전 장면 보여주고 clear 그 다음 장면 보여주고 clear 
	glBegin(GL_POLYGON);//그래픽 object를 선언 , 이런 오브젝트가 있어 , 다각형을 그리겠다. 
	//glBegin부터 glEnd까지는 하나의 덩어리로 보아라
	//4가지 점을 가지는 사각형
	glVertex3f(-0.5, -0.5, 0.0);//점  지정 x,y,z
	glVertex3f(0.5, -0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);//한 줄 빼면 삼각형 나옴
	glEnd();//그래픽 object 내용 마무리 
	glFlush();//버퍼에 있는 몽땅 한꺼번에 보내 내용을 그리도록 함 
	//gpu는 병렬 처리가 가능하다 . 

}
int main(int argc, char*argv[]) {
	glutInit(&argc, argv);//GLUT 라이브러리 초기화 안하면 에러 발생함
	glutCreateWindow("Test");//윈도우 생성 
	glutDisplayFunc(mydisplay);//display 함수 지정 , 보여주는 것을 어떻게 할지, mydisplay는 위의 함수 이름 
	glutMainLoop();//메인 루프 돌입 , mainloop는 무한루프다 

	return 0;//메인루프가 끝날 때 까지 실행되지 않음 
}
