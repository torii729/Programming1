/* 파일명: 124assign02.c
   * 내용: 02. 가로의 길이와 세로의 길이를 입력받아 직사각형의
   *	넓이와 둘레를 구하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.4.4
   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//사용할 함수 선언
void Nemo(void);

int main()
{
	Nemo();
	return 0;
}

void Nemo(void) {
	//변수 선언 및 초기화(넓이, 둘레)
	int w = 0; 
	int h = 0;

	//가로, 세로 길이 입력받기
	printf("가로의 길이? ");
	scanf("%d", &w);

	printf("세로의 길이? ");
	scanf("%d", &h);

	printf("직사각형의 넓이: %d\n", w * h);
	printf("직사각형의 둘레: %d\n", w * 2 + h * 2);

	return 0;
}
