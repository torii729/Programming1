/* 파일명: 072assign11.c
   * 내용: 11. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오.
		소수점 이하 2자리까지, 소수점 이하 4자리까지, 소수점 이하 6자리까지, 소수점 이하 8자리까지 각각 출력하고, 지수 표기로도 출력해본다.
   * 작성자: 강기민
   * 날짜: 2025.3.20
   * double형 변수를 사용 */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void own(void);

int main()
{
	own();
	return 0;
}

void own()
{
	double ownju = 3.14159265;

	printf("pi = %.2f\n", ownju);
	printf("pi = %.4f\n", ownju);
	printf("pi = %.6f\n", ownju);
	printf("pi = %.8f\n", ownju);
	printf("pi = %e\n", ownju);

	return 0;
}