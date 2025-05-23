/* 파일명: 371assign08.c
   * 내용: 08. 상품 가격이 저장된 정수형 배열에 대하여 할인율(%)을 입력받아
			할인된 가격을 계산해서 출력하는 프로그램을 작성하시오, 
			상품 가격이 저장된 배열의 크기는 5이고, 상품 가격은 입력받아서 사용한다.
			할인된 가격은 별도의 배열에 저장해야 한다.
   * 작성자: 강기민
   * 날짜: 2025.5.22
   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
void calculate(int array[], int arrayDisc[], int discount, int size);
void printArray(int array[], int arrayDisc[], int size);

// 함수를 출력하고 정상적으로 프로그램을 종료하는 함수
int main()
{
	menu();
	return 0;
}

/*
	변수의 선언 및 초기화, 상품가와 할인율을 입력받고
	함수 호출을 통해 할인가를 구하고 출력하는 함수
*/ 
void menu()
{
	int array[5] = { 0 };
	int arrayDisc[5] = { 0 };

	int size = sizeof(array) / sizeof(array[0]);
	int discount = 0;

	printf("상품가 5개를 입력하세요 : ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("할인율(%%)? ");
	scanf("%d", &discount);

	calculate(array, arrayDisc, discount, size);
	printArray(array, arrayDisc, size);
}

// 할인가를 계산하는 함수
void calculate(int array[], int arrayDisc[], int discount, int size)
{
	double disc = (100.0 - discount) / 100.0;

	for (int j = 0; j < size; j++)
	{
		arrayDisc[j] = (int)(array[j] * disc);
	}
}

// 두 배열을 순서대로 출력하는 함수
void printArray(int array[], int arrayDisc[], int size)
{
	for (int a = 0; a < size; a++)
	{
		printf("가격 : %d --> 할인가 : %d\n", array[a], arrayDisc[a]);
	}
}