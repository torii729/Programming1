/* ���ϸ�: 246assign01.c
   * ����: 01. ���� ��ǥ (x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
   *		��ũ�� ���� ���� ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�.
   * �ۼ���: �����
   * ��¥: 2025.4.24
   */

#include <stdio.h>

void square(int* left, int* right, int* top, int* bottom, int* x, int* y);
void a(int left, int right, int top, int bottom, int x, int y);

// ������ �ʱ�ȭ�ϰ� �Լ��� ȣ���ϴ� ����
int main()
{

	int left = 0;
	int right = 0;
	int top = 0;
	int bottom = 0;

	int x = 0;
	int y = 0;

	square(&left, &right, &top, &bottom, &x, &y);
	a(left, right, top, bottom, x, y);

	return 0;
}

// �»����, ���ϴ���, ���� ��ǥ�� �Է¹޴� �Լ�
void square(int* left, int* right, int* top, int* bottom, int* x, int* y)
{

	printf("�»����?: ");
	scanf_s("%d %d", &left, &top);

	printf("���ϴ���?: ");
	scanf_s("%d %d", &right, &bottom);

	printf("���� ��ǥ?: ");
	scanf_s("%d %d", &x, &y);
}

// x�� left�� right ���̿� �ְ�, y�� top�� bottom ���̿� ������ ���� �� ���̶�� ����ϴ� ����
void a(int left, int right, int top, int bottom, int x, int y)
{
	if (x >= left && x <= right && y <= top && y <= bottom)
	{
		printf("���� ��");
	}
	else
	{
		printf("���� ���� �ƴմϴ�");
	}
}