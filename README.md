# Computer-Graphics
## TOOL-OpenGl 
### DAY1 -opengl 설치하기, 컴퓨터 그래픽스란?,테스트 코드 작성하고 실행하기
컴퓨터 그래픽스란?
컴퓨터 그래픽스(CG)의 활용처 -영화, 게임, 시뮬레이션 , 교육
기타 도구 - 3D Max , Processing etc
Low-Level vs High-Level
OpenGL(활용도가 높음), DirectX(코딩을 해야하는 Low Level)
Unity3D,UnrealEngine(High Level)
그래픽 하드웨어
입력장치-키보드,마우스
메인 컴퓨터
그래픽 처리장치(GPU)-gpu가 높을수록 렌더링 할 때 선명도 up 
출력장치-모니터 등
컬러의 표현 방법
![image](https://user-images.githubusercontent.com/81097873/152217204-1fd81c18-9955-4543-886c-dd9e3d431ed4.png)

Ex)노란색을 표현하기 위해서는? 빨강 밝기와 초록 밝기, 파랑 밝기를 각각에 대해서 정보를 주고 적절하게 조절하여 시각화 
레스터 그래픽과 벡터 그래픽
레스터 그래픽 같은 경우 모니터 상의 직선 보이는데 확대해보니까 격자무늬에 점들로 채워져 있다. (저장 공간이 많이 필요, 흰 배경의 쓸데 없는 것 까지 저장해야 하는 저장공간 낭비가 발생함)(아무리 선명해도 계속 확대하면 화질이 깨짐)
벡터 그래픽은 (0,0)부터 (9,5)까지 그리라는 명령, 얘는 모니터의 크기에 영향을 미치지 않음.(얘는 저장공간 효율적임, 단지 (0,0)부터 (9,5)까지 그리라는 명령어만 저장공간 차지, 필요할 때만 사용도 가능)(ex 파워포인트 도형 그리기)(아무리 확대해도 화질이 깨지지 않는다.)
![image](https://user-images.githubusercontent.com/81097873/152217122-202f12a5-deb3-4939-bcd7-5020c26a1dae.png)

해상도(레스터 그래픽)-픽셀 개수 많을 수록 선명하다,화질이 좋아진다. 
![image](https://user-images.githubusercontent.com/81097873/152217273-bd8917d9-ee56-456d-83db-44423a7f2d90.png)


색상을 어떻게 표현?

![image](https://user-images.githubusercontent.com/81097873/152217321-43879c5e-f089-4033-b4cf-ae4036b418fb.png)

흑백 사진을 표현하기 위해서는 얼마나 많은 공간 필요할까요? 1칸. 0이면 검정 1이면 흰색  그레이브 스케일(0이면 black 255면흰색, css에서 배움)
흑백은 0이면 black 그 중간이면 회색 255이면 흰색 이렇게 표현된다.
255까지의 농도(범위)라고 할 수 있음, ex) 빨강 255, 파랑 255 ,초록 0이러면 핑크 나오는 거임 


그래픽의 기본 요소 

점 하나만 가지고는 무엇을 할 수가 없다. 점은 시각적으로 잘 보이지 않는다. 그래픽스에서는 위치를 지정하고 있기에 확대를 하면 보인다. 
점과 점을 연결한 선 
채움 영역은 점 3개 이상 연결되어 있는 도형
왜 곡선은 없냐? - 꺽은 선을 굉장히 많이 꺽어가면서 겹쳐서 만들면서 곡선을 만든다. 선들이 계속 모여서 곡선을 만든다.  
표시 꺽은선은 꺽은 선과 같은데 꺾은 부분을 표시 해 놓은 것 
문자는 우리가 알고 있는 그 문자이다. 
기본요소 외양

GPU를 통해 화면에 오브젝트를 그리기 위해서는 
상대변수를 변환프로세서->절단 프로세서->투상 프로세서->레스터 프로세서 단계로 코딩할 때 각 단계별로 필요한 파라메터를 넘겨주게 된다. 
Opengl의 기본 구조 

###DAY2
그래픽의 기본 요소 

![image](https://user-images.githubusercontent.com/81097873/152375947-e75d53cb-1a6a-4b17-ba91-2a6baf4fb98b.png)

점 하나만 가지고는 무엇을 할 수가 없다. 점은 시각적으로 잘 보이지 않는다. 그래픽스에서는 위치를 지정하고 있기에 확대를 하면 보인다. 
점과 점을 연결한 선 
채움 영역은 점 3개 이상 연결되어 있는 도형
왜 곡선은 없냐? - 꺽은 선을 굉장히 많이 꺽어가면서 겹쳐서 만들면서 곡선을 만든다. 선들이 계속 모여서 곡선을 만든다.  
표시 꺽은선은 꺽은 선과 같은데 꺾은 부분을 표시 해 놓은 것 
문자는 우리가 알고 있는 그 문자이다. 

기본요소 외양

![image](https://user-images.githubusercontent.com/81097873/152375976-b91fc795-60a5-4513-b6ff-449272e4a81d.png)

GPU를 통해 화면에 오브젝트를 그리기 위해서는 
상대변수를 변환프로세서->절단 프로세서->투상 프로세서->레스터 프로세서 단계로 코딩할 때 각 단계별로 필요한 파라메터를 넘겨주게 된다. 


Opengl의 기본 구조 

![image](https://user-images.githubusercontent.com/81097873/152376002-7caa27f2-f641-43b2-8926-ebd512b5a5f6.png)



윈도우와 뷰포트 
윈도우 크기 조정 
윈도우의 크기에 따라서 안의 모양이 변형이 일어나는 문제가 있다. 
![image](https://user-images.githubusercontent.com/81097873/152377234-8b5f6a7d-c3a3-450e-a65b-b2d3eacf49d8.png)


뷰포트 
특정 위치에서 내가 원하는 이미지 넣을 수 있고 원점은 왼쪽 아래 
![image](https://user-images.githubusercontent.com/81097873/152377251-7b15c802-8c75-4ad4-b706-86a67c683485.png)

GLUT와 GL의 화면 좌표계 
어떤 경우는 아래서 부터 어떤 경우는 위에서부터 원점을 잡고 시작할 수 있다. 
뷰포트 함수 는 glViewport(좌표)
![image](https://user-images.githubusercontent.com/81097873/152377512-474ff853-f1c6-41f8-9d30-157abc66c9fb.png)

![image](https://user-images.githubusercontent.com/81097873/152377301-0f056c55-d2c6-46a2-ae4f-7c3dcb0cb015.png)

입력 콜백과 GLUT 
시스템과 이벤트
Ex) 사용자가 스페이스 바를 눌렀을 때 총을 발사해야 하는 반응을 해야 할 수가 있다. 기다리고 있다가 반응을 받으면 빨리 특정함수를 불러야 한다.  
운영체제에서는 이벤트큐로 관리함. 그러나 모든 이벤트 처리 안함. 특정함수 기다리고 있던 함수 들어오면 나한테 좀 알려줘의 역할(callback)을 함. 
![image](https://user-images.githubusercontent.com/81097873/152377773-8871cfa0-5540-4036-84d3-7ae50ef45076.png)

이벤트 처리와 콜백함수
![image](https://user-images.githubusercontent.com/81097873/152377839-44d277d2-54d0-45a0-87d3-4069c6e43371.png)

이벤트와 콜백함수 
glutDisplayFunc
glutMouseFunc
glutKeyboardFunc
glutReshapeFunc
glutIdleFunc

Reshape Callback 
Ex) glutReshapeFunc(void(*func)(int width, int height));
-윈도우의 크기가 바뀔 때 발생하는 콜백
-윈도우의 크기가 바뀔 때 해야 할 일들을 지정->프로그래머의 의도에 따라 자유
-일반적으로 하는 일 ->뷰포트 지정, project행렬 지정(어떻게 보여지게 할 것인가), glOrtho()(원근없이 보는 방법), glPerspective()(원근감 있게 보는 방법)->projection행렬 지정시 윈도우 크기 변화에 비례하여 지정하면 왜곡이 일어나지 않는다. 
Projection 행렬 지정관련함수
glMatrixMode(mode);
glLoadIdentity();
glOrtho(left, right, bottom, top, near, far);
glMatrixMode(mode);
Mode->GL_MODELVIEW,GL_PROJECTION, GL_TEXTURE

DAY2 실습 출력화면


![image](https://user-images.githubusercontent.com/81097873/152378168-0809b43b-bd03-4afc-b74d-2833ac6c84f7.png)

마우스 콜백 
-마우스 버튼이 눌러지거나 , 마우스가 움직일 때 불러지는 함수 
ex) glutMouseFunc(void(*func)(int button, int state, int x, int y));
glut MotionFunc
glutPassiveMotionFunc
glutEntryFunc 



