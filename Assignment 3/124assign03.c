/* 파일명: 124assign03.c
   * 내용: 03. 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오.
   *	질량은 kg 단위, 높이는 m 단위로 입력받는다.
   * 작성자: 강기민
   * 날짜: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void wichi(void);

int main()
{
	wichi();
	return 0;
}

void wichi(void) {

	//변수 선언 및 초기화(질량, 높이, 위치에너지)
	float m = 0;
	float h = 0;
	float e = 0;

	printf("질량(kg)?: ");
	scanf("%f", &m);
	
	printf("높이(m)?: ");
	scanf("%f", &h);

	e = 9.8 * m * h; // 위치에너지 = 9.8 * 질량 * 높이 
	
	printf("위치에너지: %.6f J", e); // 위치에너지 값 소수점 6자리 출력
	
	return 0;
}