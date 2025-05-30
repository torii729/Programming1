/* 파일명: 567assign08.c
   * 내용: 08. 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오.
			각 제품별로 제품명, 가격, 재고를 저장할 수 있어야 한다.
			PRODUCT 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product 함수를 정의하시오.
			PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
			참고로 제품명은 빈칸 없는 한 단어로 입력한다.
   * 작성자: 강기민
   * 날짜: 2025.5.30
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 제품 정보를 관리하는 구조체 선언
typedef struct PRODUCT
{
	char name[20];
	int price;
	int stock;
}Product;

// 입력받는 함수와 출력하는 함수 선언
void input(Product * menu);
void print_product(Product menu);

/*
	main 함수
	 구조체 변수를 출력하고 함수 호출을 통해 제품 정보를 출력한다.
	 그리고 정상적으로 프로그램을 종료하는 함수
*/
int main()
{
	Product menu;

	input(&menu);
	print_product(menu);
	
	return 0;
}

/*
	input 함수
	 제품 정보를 입력받아 구조체 멤버에 저장
	Product 구조체 변수의 주소를 포인터로 받아오고
	포인터를 사용해 구조체 변수 menu를 직접 수정하는 함수
*/
void input(Product * menu)
{
	printf("제품명? ");
	scanf("%s", &menu->name);

	printf("가격? ");
	scanf("%d", &menu->price);

	printf("재고? ");
	scanf("%d", &menu->stock);
}

/*
	print_product 함수
	 구조체 변수를 값으로 전달받아 제품 정보를 출력하는 함수
*/
void print_product(Product menu)
{
	printf("[%s %d원 재고 : %d]", menu.name, menu.price, menu.stock);
}