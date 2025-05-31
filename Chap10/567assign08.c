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

// ��ǰ ������ �����ϴ� ����ü ����
typedef struct PRODUCT
{
	char name[20];
	int price;
	int stock;
}Product;

// �Է¹޴� �Լ��� ����ϴ� �Լ� ����
void input(Product * menu);
void print_product(Product menu);

/*
	main �Լ�
	 ����ü ������ ����ϰ� �Լ� ȣ���� ���� ��ǰ ������ ����Ѵ�.
	 �׸��� ���������� ���α׷��� �����ϴ� �Լ�
*/
int main()
{
	Product menu;

	input(&menu);
	print_product(menu);
	
	return 0;
}

/*
	input �Լ�
	 ��ǰ ������ �Է¹޾� ����ü ����� ����
	Product ����ü ������ �ּҸ� �����ͷ� �޾ƿ���
	�����͸� ����� ����ü ���� menu�� ���� �����ϴ� �Լ�
*/
void input(Product * menu)
{
	printf("��ǰ��? ");
	scanf("%s", &menu->name);

	printf("����? ");
	scanf("%d", &menu->price);

	printf("���? ");
	scanf("%d", &menu->stock);
}

/*
	print_product �Լ�
	 ����ü ������ ������ ���޹޾� ��ǰ ������ ����ϴ� �Լ�
*/
void print_product(Product menu)
{
	printf("[%s %d�� ��� : %d]", menu.name, menu.price, menu.stock);
}