/* 파일명: 252assign17.c
   * 내용: 17. 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오.
   *		주차 요금은 최초 30분은 2000원, 그 이후는 10분당 1000원으로 계산하며, 하루 최대 25000원을
   *		넘을 수 없다. 주차 시간은 24시간을 넘을 수는 없다고 가정한다.
   * 작성자: 강기민
   * 날짜: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void time(int* min);
void money(int min, int parking);

// 변수를 초기화하고 함수를 호출하는 역할
int main()
{
	int min = 0;
	int parking = 0;

	time(&min);
	money(min, parking);
	return 0;
}

// 주차 시간을 입력받는 역할
void time(int* min)
{
	printf("주차 시간(분)? ");
	scanf("%d", min);
}

// 입력받은 주차 시간 변수를 이용해 조건에 맞게 요금 계산을 하는 역할
void money(int min, int parking)
{
	if (min > 1440)
	{
		printf("주차 시간은 24시간(1440분)을 넘을 수 없습니다.");
		return;
	}
	else if (min <= 30)
	{
		printf("주차 요금: 2000원");
	}
	else if (min > 30)
	{
		parking = 2000 + (min - 30) / 10 * 1000;

		if (parking > 25000)
		{
			printf("주차 요금: 25000원");
		}
		else
		{
			printf("%d원", parking + 1000);
		}
	}
}