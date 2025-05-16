/* 파일명: 372assign09.c
   * 내용: 09. 1~12월의 핸드폰 요금을 배열에 저장하고 화면에 막대 그래프로 출력하는 프로그램을 작성하시오.
   *		12개월의 핸드폰 요금이 들어있는 배열을 특정 값으로 초기화해서 사용하고,
   *		핸드폰 요금 2000원 당 '*'를 하나씩 막대 그래프로 출력한다.
   * 작성자: 강기민
   * 날짜: 2025.5.22
   */

#include <stdio.h>
void phone();
void graph(int cost[], int size);

int main()
{
	phone();
	return 0;
}

void phone()
{
	int cost[12] = { 36000, 42000, 38000, 37000, 40000, 41000, 35000, 50000, 51000, 45000, 42000, 65000 };
	int size = sizeof(cost) / sizeof(cost[0]);

	graph(cost, size);
}

void graph(int cost[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int star = cost[i] / 2000;
		int index = i + 1;
		printf("%d월 %d : ", index, cost[i]); 

		for (int a = 0; a < star; a++)
		{
			printf("*");
		}
		printf("\n");
	}
}
