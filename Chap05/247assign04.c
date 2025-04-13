/* 파일명: 247assign04.c
   * 내용: 04. 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.4.24
   */

#include <stdio.h>

void year(int* y);
void cul(int y);

// 변수를 초기화하고 함수를 호출하는 역할
int main()
{
	int y = 0;
	year(&y);
	cul(y);

	return 0;
}

// 연도를 입력받는 역할
void year(int* y)
{
	printf("연도?");
	scanf_s("%d", y);
}

// 입력받은 연도가 윤년인지 아닌지 출력하는 역할
void cul(int y)
{
	if (y % 4 == 0 && y % 100 == 0 && y % 400 != 0)
	{
		printf("%d년은 윤년이 아닙니다", y);
	}
	else if (y % 4 == 0 && y % 400 == 0 || y % 400 == 0)
	{
		printf("%d년은 윤년입니다", y);
	}
	else
	{
		printf("%d년은 윤년입니다", y);
	}
}