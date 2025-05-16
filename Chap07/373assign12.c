/* 파일명: 373assign12.c
   * 내용: 12. 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 하자.
   *		예매할 좌석수를 입력받아 빈 자리를 할당한다. 예매할 때마다 각 좌석의 상태를 출력한다.
   *		O이면 예매 가능, X면 예매 불가를 의미한다. 더 이상 예매할 수 없으면 프로그램을 종료한다.
   * 작성자: 강기민
   * 날짜: 2025.5.22
   */

   /*
	   전체적인 흐름
	   1. 현재 좌석 상태 출력
	   2. 남은 좌석 수 확인
	   3. o인 좌석부터 가능하면 예약
	   3-1. 남은 좌석 수보다 많은 좌석을 예약하려 할땐 예매가 불가능하므로 종료
	   4. 좌석 상태 출력
	   5. 1~4의 반복
   */

   /*
	   예매가 불가능할 때까지 계속 좌석 예매를 반복해야 하므로 while문이나 for문
	   좌석이 모두 예약이 되면(모두 X인 경우) 종료
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sit();
void sitPrint(int sitTrain[], int size);
void sitInput(int sitTrain[], int size);
void sitCheck(int sitTrain[], int size);

int main()
{
	sit();
	return 0;
}

void sit()
{
	int sitTrain[10] = { 0 };
	int size = sizeof(sitTrain) / sizeof(sitTrain[0]);

	sitInput(sitTrain, size);
}

void sitPrint(int sitTrain[], int size)
{
	printf("현재 좌석 : [ ");
	for (int i = 0; i < size; i++)
	{
		if (sitTrain[i] == 0)
		{
			printf("O ");
		}
		else
		{
			printf("X ");
		}
	}
	printf("]\n");
}

void sitInput(int sitTrain[], int size)
{
	int num = 0;

	while (1)
	{
		int sitReserved[10] = { 0 };
		int reserved = 0;
		int remain = 0;

		sitPrint(sitTrain, size);
		printf("예매할 좌석수? ");
		scanf("%d", &num);

		for (int i = 0; i < size; i++)
		{
			if (sitTrain[i] == 0)
			{
				remain++;
			}
		}

		if (remain < num)
		{
			printf("예약 좌석이 부족합니다.\n");
			break;
		}

		for (int i = 0; reserved < num && i < size; i++)
		{
			if (sitTrain[i] == 0)
			{
				sitTrain[i] = 1;
				sitReserved[reserved] = i + 1;
				reserved++;
			}
		}

		for (int j = 0; j < reserved; j++)
		{
			printf("%d ", sitReserved[j]);
		}
		printf("번 좌석을 예매했습니다.");
	}

	sitCheck(sitTrain, size);

}

void sitCheck(int sitTrain[], int size)
{
	int all = 1;

	for (int i = 0; i < size; i++)
	{
		if (sitTrain[i] == 0)
		{
			all = 0;
			break;
		}

		if (all == 1)
		{
			printf("모든 좌석 예매 완료.");
			break;
		}
	}
}
