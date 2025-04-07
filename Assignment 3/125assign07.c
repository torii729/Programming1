/* 파일명: 125assign07.c
   * 내용: 07. 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을
   *	작성하시오. 실수값을 입력받을 때는 12.34처럼 소수 표기 방법이나
   *	1.234e2처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고
   *	제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력하시오.
   * 작성자: 강기민
   * 날짜: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 수식 계산을 위한 헤더파일 math.h을 채용해보았음. 부동소수점 때문에
#include <math.h>

void zegop(void);

int main()
{
    zegop();
    return 0;
}

void zegop(void) {
    
    // 변수 선언 및 초기화(실수, 제곱, 세제곱)
    double n = 0;
    double s = 0;
    double c = 0;

    printf("실수? ");
    scanf("%lf", &n);

    // 거듭제곱 계산을 위한 함수 pow()를 채용해보았음
    s = pow(n, 2);
    c = pow(n, 3);

    printf("제곱: %e\n", s);
    printf("세제곱: %e\n", c);

    return 0;
}