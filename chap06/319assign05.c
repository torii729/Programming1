/* ���ϸ�: 319assign05.c
   * ����: 05. ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�.
   *	�� �Լ��� �̿��ؼ� 0�� �Էµ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check();
void is_even(int n, int* even);
void is_odd(int n, int* odd);

int main(void)
{
	check();
	return 0;
}

void check()
{
	int n = 0;
	int even = 0;
	int odd = 0;

	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�) ");
	while (1)
	{
		if (scanf("%d", &n) != 1)
		{
			printf("�߸��� �Է��Դϴ�.");
			return;
		}

		if (n == 0)
		{
			break;
		}

		is_even(n, &even);
		is_odd(n, &odd);
	}

	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", even, odd);
}

void is_even(int n, int* even)
{
	if (n % 2 == 0)
	{
		(*even)++;
	}
}

void is_odd(int n, int* odd)
{
	if (n % 2 != 0)
	{
		(*odd)++;
	}
}