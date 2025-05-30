/* ���ϸ�: 567assign08.c
   * ����: 08. Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
			�� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
			PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
			PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
			����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.5.30
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
	printf("��ǰ��? ");
	scanf("%s", &menu->name);

	printf("����? ");
	scanf("%d", &menu->price);

	printf("���? ");
	scanf("%d", &menu->stock);
}

void print_product(Product menu)
{
	printf("[%s %d�� ��� : %d]", menu.name, menu.price, menu.stock);
}