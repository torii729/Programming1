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

typedef struct PRODUCT
{
	char name[20];
	int price;
	int stock;
}Product;

void input(Product * menu);
void print_product(Product menu);

int main()
{
	Product menu;

	input(&menu);
	print_product(menu);
	
	return 0;
}

void input(Product * menu)
{
	printf("제품명? ");
	scanf("%s", &menu->name);

	printf("가격? ");
	scanf("%d", &menu->price);

	printf("재고? ");
	scanf("%d", &menu->stock);
}

void print_product(Product menu)
{
	printf("[%s %d원 재고 : %d]", menu.name, menu.price, menu.stock);
}