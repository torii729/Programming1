/* 파일명: 071assign09.c
   * 내용: 16진수 정수를 입력받아 10진수로 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void jinsu(void);

int main()
{
	jinsu();
	return 0;
}

void jinsu()
{
	int x_num;

	printf("16진수 정수? ");
	scanf("%x", &x_num);

	printf("16진수 %x는 10진수로 %d입니다.", x_num, x_num);

	return 0;
}