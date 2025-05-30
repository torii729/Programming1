/* ���ϸ�: 569assign13.c
   * ����: 13. ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�.
			���簢���� ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����.
			���簢�� ������ ����ϴ� print_rect �Լ��� �����ϰ�,
			RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.29
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct POINT
{
	int x;
	int y;
}Point;

typedef struct RECT
{
	Point left_bottom;
	Point right_top;
}Rect;

void input(Rect * square);
void print_rect(Rect square);

int main()
{
	Rect square;

	input(&square);
	print_rect(square);

	return 0;
}

void input(Rect * square)
{
	printf("���簢���� ���ϴ���(x, y)? ");
	scanf("%d %d", &square->left_bottom.x, &square->left_bottom.y);

	printf("���簢���� ������(x, y)? ");
	scanf("%d %d", &square->right_top.x, &square->right_top.y);
}

void print_rect(Rect square)
{
	printf("[RECT ���ϴ��� : (%d, %d), ������ : (%d, %d)]",
		square.left_bottom.x, square.left_bottom.y, square.right_top.x, square.right_top.y);
}