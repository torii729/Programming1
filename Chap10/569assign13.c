/* ���ϸ�: 569assign13.c
   * ����: 13. ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�.
			���簢���� ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����.
			���簢�� ������ ����ϴ� print_rect �Լ��� �����ϰ�
			RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.29
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��ǥ�� ��Ÿ���� ����ü ����
typedef struct POINT
{
	int x; // x��ǥ
	int y; // y��ǥ
}Point;

// ���簢�� ������ ��Ÿ���� ����ü�� ����
typedef struct RECT
{
	Point left_bottom; // ���ϴ���
	Point right_top; // ������
}Rect;

// ��ǥ�� �Է¹޴� �Լ��� ����ϴ� �Լ� ����
void input(Rect * square);
void print_rect(Rect square);

/*
	main �Լ�
	 ����ü ������ �����ϰ� �Լ� ȣ���� ���� ��ǥ�� ����ϴ� �Լ�
*/
int main()
{
	Rect square;

	input(&square);
	print_rect(square);

	return 0;
}

/*
	input �Լ�
	 ���ϴ����� �������� �Է¹޾� ����ü�� ����
	�����͸� ����� �ּҸ� �����Ͽ� ����ü ������ square�� �����Ѵ�.
*/
void input(Rect * square)
{
	printf("���簢���� ���ϴ���(x, y)? ");
	scanf("%d %d", &square->left_bottom.x, &square->left_bottom.y);

	printf("���簢���� ������(x, y)? ");
	scanf("%d %d", &square->right_top.x, &square->right_top.y);
}

/*
	print_rect �Լ�
	 ���簢�� ��ǥ�� ����ϴ� �Լ�
*/
void print_rect(Rect square)
{
	printf("[RECT ���ϴ��� : (%d, %d), ������ : (%d, %d)]",
		square.left_bottom.x, square.left_bottom.y, square.right_top.x, square.right_top.y);
}