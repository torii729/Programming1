/* ���ϸ�: 071assign07.c
   * ����: Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.
   * �ۼ���: �����
   * ��¥: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void caffee(void);

int main()
{
	caffee();
	return 0;
}

void caffee()
{
	int num;
	char size;

	printf("Ŀ�� ������(S, T, G)�� ���� ����? ");
	scanf("%c %d", &size, &num);

	printf("%c ������ %d���� �ֹ��մϴ�.", size, num);

	return 0;
}