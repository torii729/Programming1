/* ���ϸ�: 318assign03.c
   * ����: 03. �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�. distance �Լ��� �̿��ؼ� �Է¹���
   *	���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void coordinate(int* x1, int* x2, int* y1, int* y2);
void distance(int x1, int x2, int y1, int y2, double dis);

int main(void)
{
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	double dis = 0;

	coordinate(&x1, &x2, &y1, &y2);
	distance(x1, x2, y1, y2, dis);

	return 0;
}

void coordinate(int* x1, int* x2, int* y1, int* y2)
{
	printf("������ ������ ��ǥ? ");
	scanf("%d %d", x1, y1);

	printf("������ ���� ��ǥ? ");
	scanf("%d %d", x2, y2);
}

void distance(int x1, int x2, int y1, int y2, double dis)
{
	dis = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
	dis = sqrt(dis);

	printf("(%d, %d)~(%d, %d) ������ ����: %.6f", x1, y1, x2, y2, dis);
}
