/* ���ϸ�: 071assign09.c
   * ����: 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void jinsu(void);

int main()
{
	jinsu();
	return 0;
}

void jinsu()
{
	int x_num;

	printf("16���� ����? ");
	scanf("%x", &x_num);

	printf("16���� %x�� 10������ %d�Դϴ�.", x_num, x_num);

	return 0;
}