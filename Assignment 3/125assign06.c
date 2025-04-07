/* 파일명: 125assign06.c
   * 내용: 06. 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는
   *	프로그램을 작성하시오. 1제곱미터는 0.3025평에 해당한다.
   *	프로그램을 작성할 때 이름 있는 상수를 이용해보자.
   * 작성자: 강기민
   * 날짜: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void apart(void);

int main()
{
	apart();
	return 0;
}

void apart(void) {

	//변수 선언 및 초기화
	float m = 0;

	//면적 입력받기
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &m);

	//변수 선언 및 초기화, 평수 계산 = 면적 * 1제곱미터
	float p = m * 0.3025;

	printf("%.2f 제곱미터 = %.2f 평\n", m, p);

	return 0;
}