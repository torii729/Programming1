/* 파일명: 071assign05.c
   * 내용: 05. 몸무게를 입력받아서 출력하는 프로그램을 작성하시오.
		몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력한다.
   * 작성자: 강기민
   * 날짜: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void wei(void);

int main()
{
	wei();
	return 0;
}

void wei()
{
	double weight;

	printf("몸무게? ");
	scanf("%lf", &weight);

	printf("입력한 몸무게는 %.2lfKG입니다.", weight);
	
	return 0;
}
