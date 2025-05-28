/* 파일명: 319assign05.c
   * 내용: 05. 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지 검사하는 is_odd 함수를 작성하시오.
   *	두 함수를 이용해서 0이 입력될 때까지 입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check(void);
void is_even(int n, int* even);
void is_odd(int n, int* odd);

// 함수를 호출하는 함수
int main(void)
{
	check();
	return 0;
}

/*
	변수를 선언 및 초기화하고 정수를 입력받는다.
	is_even, is_odd 함수를 호출하여 짝수, 홀수 개수를 전달받는다.
	그리고 짝수, 홀수 개수를 출력한다.
*/
void check(void)
{
	int n = 0;
	int even = 0;
	int odd = 0;

	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력) ");
	while (1)
	{
		if (scanf("%d", &n) != 1)
		{
			printf("잘못된 입력입니다.");
			return;
		}

		if (n == 0)
		{
			break;
		}

		is_even(n, &even);
		is_odd(n, &odd);
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even, odd);
}

// 짝수인지 판단하는 함수
void is_even(int n, int* even)
{
	if (n % 2 == 0)
	{
		(*even)++;
	}
}

// 홀수인지 판단하는 함수
void is_odd(int n, int* odd)
{
	if (n % 2 != 0)
	{
		(*odd)++;
	}
}
