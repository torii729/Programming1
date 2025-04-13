/* 파일명: 246assign01.c
   * 내용: 01. 점의 좌표 (x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
   *		스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다.
   * 작성자: 강기민
   * 날짜: 2025.4.24
   */

#include <stdio.h>

void square(int* left, int* right, int* top, int* bottom, int* x, int* y);
void a(int left, int right, int top, int bottom, int x, int y);

// 변수를 초기화하고 함수를 호출하는 역할
int main()
{

	int left = 0;
	int right = 0;
	int top = 0;
	int bottom = 0;

	int x = 0;
	int y = 0;

	square(&left, &right, &top, &bottom, &x, &y);
	a(left, right, top, bottom, x, y);

	return 0;
}

// 좌상단점, 우하단점, 점의 좌표를 입력받는 함수
void square(int* left, int* right, int* top, int* bottom, int* x, int* y)
{

	printf("좌상단점?: ");
	scanf_s("%d %d", &left, &top);

	printf("우하단점?: ");
	scanf_s("%d %d", &right, &bottom);

	printf("점의 좌표?: ");
	scanf_s("%d %d", &x, &y);
}

// x가 left와 right 사이에 있고, y가 top과 bottom 사이에 있으면 영역 내 점이라고 출력하는 역할
void a(int left, int right, int top, int bottom, int x, int y)
{
	if (x >= left && x <= right && y <= top && y <= bottom)
	{
		printf("영역 내");
	}
	else
	{
		printf("영역 내가 아닙니다");
	}
}