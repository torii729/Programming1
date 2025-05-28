/* 파일명: 179assign02.c
   * 내용: 02. 화씨 온도를 실수로 입력바당 섭씨 온도로 변환해서 출력하는
   *	프로그램을 작성하시오. 화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.
   * 작성자: 강기민
   * 날짜: 2025.4.11
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 선언
void sup(void);


// 메인 함수, 섭씨 온도로 변환해주는 함수(sup())를 호출함
int main()
{
	sup();
	return 0;
}

// 화씨 온도를 입력받고 섭씨 온도로 변환해주는 함수
void sup(void)
{
	double f = 0;

	printf("%s", "화씨 온도? ");
	scanf("%lf", &f);


	// 섭씨 온도 공식
	double c = (f - 32) * (5.0 / 9.0);

	printf("%.2f F = %.2f C", f, c);

	return 0;
}
