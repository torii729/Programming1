/* 파일명: 249assign09.c
   * 내용: 09. 햄버거 가게의 계산서 프로그램을 작성하시오. 햄버거는 4000원, 콜라는 1500원, 감자튀김은 2000원이고
   *		세 가지를 세트로 주문하면 6500원이라고 하자. 햄버거, 콜라, 감자튀김의 수량을 입력받아서
   *		최대한 세트로 구성하고 나머지는 단품으로 계산하도록 한다.
   *		예를 들어 햄버거 2, 콜라 1, 감자튀김 3을 주문하면 계산은 세트 1, 햄버거1, 감자튀김 2로 해야 한다.
   * 작성자: 강기민
   * 날짜: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void menu(int* potato, int* cola, int* ham);
void cul(int potato, int cola, int ham);

// 변수를 초기화하고 함수를 호출하는 역할
int main()
{
	int potato = 0;
	int cola = 0;
	int ham = 0;
	

	menu(&potato, &cola, &ham);

	cul(potato, cola, ham);

	return 0;
}

// 주문 개수를 입력받는 역할
void menu(int* potato, int* cola, int* ham)
{
	printf("감자튀김? ");
	scanf("%d", potato);

	printf("콜라? ");
	scanf("%d", cola);

	printf("햄버거? ");
	scanf("%d", ham);
}

// 입력받은 주문 개수를 토대로 세트 개수 및 총 가격을 계산하는 역할
void cul(int potato, int cola, int ham)
{
	/*
		감자튀김을 먼저 입력받으므로 일단 세트 수가 감자튀김 수랑 같다고 하였음.
		변수 선언 및 초기화 다음에 세트 개수 계산하는 코드 작성했으니 참고
	*/
	int set = potato;

	// 가격
	int n_po = 2000;
	int n_co = 1500;
	int n_ha = 4000;
	int n_set = 6500;

	//
	int total = 0;

	// 감자튀김, 콜라, 햄버거 중에서 가장 적은 수만큼 세트 개수를 정하면 된다.
	if (cola < set)
	{
		set = cola;
	}
	else if (ham < set)
	{
		set = ham;
	}

	// 총 가격 계산
	total = (set * n_set) + (potato * n_po) + (cola * n_co) + (ham * n_ha);

	printf("상품명 단가, 수량, 금액\n");
	if (set > 0)
	{
		printf("세트, 세트 당 %d원, 현재 세트 %d세트, 총 %d원입니다.", n_set, set, set * n_set);
	}
	if (set <= 0)
	{
		printf("세트 없음, 감자튀김 %d, 콜라 %d, 햄버거 %d, 총 %d원입니다.", potato, cola, ham, total);
	}
}