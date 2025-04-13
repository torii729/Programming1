/* 파일명: 248assign08.c
   * 내용: 08. 비트 연산을 수행하는 계산기를 프로그램하시오. &는 비트 AND, |는 비트 OR, ^는 비트 XOR 연산을 처리한다.
   *		"0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구한다. 비트 연산이므로 연산식을 입력받을 때 10진수, 8진수, 16진수를
   *		사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.
   * 작성자: 강기민
   * 날짜: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scan(int* int1, int* int2, char* bit, int* end);
void cul(int int1, int int2, char bit, int end);

// 변수를 초기화하고 함수를 호출하는 역할
int main()
{
	int int1 = 0;
	int int2 = 0;

	char bit = 0;

	int end = 0;
	
	scan(&int1, &int2, &bit, &end);
	cul(int1, int2, bit, end);

	return 0;
}

// 비트 연산식을 입력받는 함수
void scan(int* int1, int* int2, char* bit, int* end)
{
	printf("비트 연산식? ");
	scanf("%x %c %x", int1, bit, int2);
}

// 변수 bit에 저장된 문자에 따라 계산하고 결과를 출력하는 역할
void cul(int int1, int int2, char bit, int end)
{
	if (bit == '&')
	{
		end = int1 & int2;
	}
	else if (bit == '|')
	{
		end = int1 | int2;
	}
	else if (bit == '^')
	{
		end = int1 ^ int2;
	}
	else
	{
		printf("잘못 입력했습니다");
	}

	printf("%08x %c %08x = %d", int1, bit, int2, end);
}