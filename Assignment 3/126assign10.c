/* 파일명: 126assign10.c
   * 내용: 10. 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는
   *	프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void own(void);

int main()
{
	own();
	return 0;
}

void own(void)
{

	// 변수 선언 및 초기화
	float u = 0; 
	float e = 0;

	//달러 입력받기
	printf("USD? ");
	scanf("%f", &u);
	
	//현재 환율 입력받기
	printf("원/달러 환율? ");
	scanf("%f", &e);

	// 환율 계산(달러 -> 원)
	float krw = u * e;

	printf("USD %.2f = KRW %.2f\n", u, krw);

	return 0;
}