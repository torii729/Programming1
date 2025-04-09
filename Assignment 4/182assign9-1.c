/* 파일명: 182assign9-1.c
   * 내용: 09. 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지
   *	출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.4.11
   */

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

	printf("재생시간은 %d시간 %d분 %d초입니다.", hour, min, sec);

	return 0;
}