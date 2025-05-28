/* 파일명: 071assign07.c
   * 내용: 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오.
		커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력받는다.
   * 작성자: 강기민
   * 날짜: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void caffee(void);

int main()
{
	caffee();
	return 0;
}

void caffee()
{
	int num;
	char size;

	printf("커피 사이즈(S, T, G)와 수문 수량? ");
	scanf("%c %d", &size, &num);

	printf("%c 사이즈 %d잔을 주문합니다.", size, num);

	return 0;
}
