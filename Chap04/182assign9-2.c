/* 파일명: 182assign9-2.c
   * 내용: 09. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지
   *	출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.4.11
   */

// 9-1와는 조금 다르게 조건 연산자를 이용하여 출력해보았음

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 시간을 출력할 함수 선언
void time(void);

// 메인 함수, 시간을 출력할 함수를 호출함
int main()
{
	time();
	return 0;
}

void time()
{
	int total_cho = 0;
	int hour = 0;
	int min = 0;
	int sec = 0;

	printf("재생시간(초)? ");
	scanf("%d", &total_cho);

	/*
		초를 3600으로 나눠서 시간 단위로 환산하고
		나머지를 60으로 나눠 분 단위로 환산함
		그리고 60초 단위로 나눌 수 있는 부분을 제외한 나머지를 구함
	*/
	hour = total_cho / 3600;
	min = (total_cho % 3600) / 60;
	sec = total_cho % 60;

	// 조건문인 if문을 이용하여 시간 또는 분이 0인 경우 출력하지 않도록 했다.
	printf("재생시간은 ");
	
	if (hour > 0)
	{
		printf("%d시간 ", hour);
	}

	if (min > 0)
	{
		printf("%d분 ", min);
	}

	printf("%d초입니다.", sec);

	return 0;
}
