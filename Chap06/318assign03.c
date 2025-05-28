/* 파일명: 318assign03.c
   * 내용: 03. 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오. distance 함수를 이용해서 입력받은
   *	시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // 실수 계산이 필요하므로 헤더 파일을 하나 더 불러옴

void coordinate(int* x1, int* x2, int* y1, int* y2);
void distance(int x1, int x2, int y1, int y2, double dis);

// 변수 선언 및 초기화하고 함수를 호출하는 함수
int main(void)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	double dis = 0;

	coordinate(&x1, &x2, &y1, &y2);
	distance(x1, x2, y1, y2, dis);

	return 0;
}

// 직선의 시작점 좌표와 직선의 끝점 좌표를 입력받는 함수
void coordinate(int* x1, int* x2, int* y1, int* y2)
{
	printf("직선의 시작점 좌표? ");
	scanf("%d %d", x1, y1);

	printf("직선의 끝점 좌표? ");
	scanf("%d %d", x2, y2);
}

// 직선의 길이를 계산하는 함수
void distance(int x1, int x2, int y1, int y2, double dis)
{
	dis = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
	dis = sqrt(dis); // 루트 계산

	printf("(%d, %d)~(%d, %d) 직선의 길이: %.6f", x1, y1, x2, y2, dis);
}
