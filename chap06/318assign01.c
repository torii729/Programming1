/* ���ϸ�: 318assign01.c
   * ����: 01. ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��Ͻÿ�.
   *	get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_perimeter(int* x, int* y);
void Square(int x, int y, int square);

// ������ ���� �� �ʱ�ȭ�ϰ� �Լ��� ȣ���ϴ� �Լ�
int main(void)
{
	int x = 0;
	int y = 0;
	int square = 0;

	get_perimeter(&x, &y);
	Square(x, y, square);
	
	return 0;
}

// ���ο� ���� ���� �Է¹޴� �Լ�
void get_perimeter(int* x, int* y)
{
	printf("����? ");
	scanf("%d", x);

	printf("����? ");
	scanf("%d", y);
}

// ���簢���� �ѷ��� ����ϴ� �Լ�
void Square(int x, int y, int square)
{
	square = (x * 2) + (y * 2);

	printf("���簢���� �ѷ�: %d", square);
}