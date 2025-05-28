/* 파일명: 181assign08.c
   * 내용: 08. 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
   *	이때 파이는 3.141592라고 하자.
   * 작성자: 강기민
   * 날짜: 2025.4.11
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 제곱 또는 세제곱 계산을 위해(pow 함수) <math.h> 헤더 파일을 포함했다.
#include <math.h>

// 파이를 미리 선언함으로써 코드를 간편하게
#define PI 3.141592

// 구의 부피를 계산하는 함수 선언
void gu(void);

// 메인 함수, 구의 부피를 계산하는 함수를 호출한다.
int main()
{
	gu();
	return 0;
}

// 반지름의 길이를 입력받고 구의 부피를 계산하는 함수
void gu(void)
{
	double radius = 0;
	double vol = 0;

	printf("반지름의 길이? ");
	scanf("%lf", &radius);

	// 구의 부피 공식
	vol = (4.0 / 3.0) * pow(radius, 3) * PI;

	printf("구의 부피: %lf", vol);

	return 0;
}
