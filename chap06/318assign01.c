/* 파일명: 318assign01.c
   * 내용: 01. 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 get_perimeter 함수를 작성하시오.
   *	get_perimeter 함수를 이용해서 입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_perimeter(int* x, int* y);
void Square(int x, int y, int square);

// 변수를 선언 및 초기화하고 함수를 호출하는 함수
int main(void)
{
	int x = 0;
	int y = 0;
	int square = 0;

	get_perimeter(&x, &y);
	Square(x, y, square);
	
	return 0;
}

// 가로와 세로 값을 입력받는 함수
void get_perimeter(int* x, int* y)
{
	printf("가로? ");
	scanf("%d", x);

	printf("세로? ");
	scanf("%d", y);
}

// 직사각형의 둘레를 계산하는 함수
void Square(int x, int y, int square)
{
	square = (x * 2) + (y * 2);

	printf("직사각형의 둘레: %d", square);
}