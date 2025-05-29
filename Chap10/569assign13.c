/* 파일명: 569assign13.c
   * 내용: 13. 직사각형 정보를 나타내는 RECT 구조체를 정의하시오.
			직사각형은 좌하단점과 우상단점으로 구성되며 점의 좌표는 POINT 구조체를 이용해서 나타낸다.
			직사각형 정보를 출력하는 print_rect 함수를 정의하고,
			RECT 구조체 변수를 선언해서 직사각형 정보를 입력받고 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.29
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct POINT
{
	int x;
	int y;
}Point;

typedef struct RECT
{
	Point left_bottom;
	Point right_top;
}Rect;

void input(Rect * square);
void print_rect(Rect square);

int main()
{
	Rect square;

	input(&square);
	print_rect(square);

	return 0;
}

void input(Rect * square)
{
	printf("직사각형의 좌하단점(x, y)? ");
	scanf("%d %d", &square->left_bottom.x, &square->left_bottom.y);

	printf("직사각형의 우상단점(x, y)? ");
	scanf("%d %d", &square->right_top.x, &square->right_top.y);
}

void print_rect(Rect square)
{
	printf("[RECT 좌하단점 : (%d, %d), 우상단점 : (%d, %d)]",
		square.left_bottom.x, square.left_bottom.y, square.right_top.x, square.right_top.y);
}