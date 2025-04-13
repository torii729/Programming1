/* 파일명: 247assign05.c
   * 내용: 05. 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오.
   *		"27 C" 또는 "27 F"처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함께 입력받는다.
   *		함께 입력된 문자가 'C'면 섭씨 온도이므로 화씨 온도를 구해서 출력하고, 입력된 문자가 'F'면 화씨 온도이므로
   *		섭씨 온도를 구해서 출력한다.
   * 작성자: 강기민
   * 날짜: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scan(double* sup, char* ha);
void cul(double sup, char ha);

// 변수를 초기화하고 함수를 호출하는 역할
int main()
{
	double sup = 0;
	char ha = 0;
	scan(&sup, &ha);
	cul(sup, ha);

	return 0;
}

// 온도를 입력받는 역할
void scan(double* sup, char* ha)
{
	printf("온도? ");
	scanf("%lf %c", sup, ha);
}

/*
	입력받은 온도가 섭씨인 경우엔 화씨 온도로 변환하고
	화씨인 경우엔 섭씨 온도로 변환하도록 계산하고 출력하는 역할
*/ 
void cul(double sup, char ha)
{
	if (ha == 'C')
	{
		double f = (sup * (9.0 / 5.0)) + 32;
		printf("%.2lf C ==> %.2f F", sup, f);
	}
	else if (ha == 'F')
	{
		double c = (sup - 32) * (9.0 / 5.0);
		printf("%.2lf F ==> %.2f C", sup, c);
	}
	else
	{
		printf("잘못 입력하셨습니다");
	}
}