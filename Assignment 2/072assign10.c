/* ���ϸ�: 072assign10.c
   * ����: 10. ������ 8����, 10����, 16���� �� �ϳ��� �Է¹޾� 8����, 10����, 16���� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		8������ �Է��� ���� �տ� 0�� �ٿ��� 012ó�� �Է��ϰ�, 16������ �Է��� ���� �տ� 0x�� �ٿ��� 0x12ó�� �Է��Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void jeongsu(void);

int main()
{
	jeongsu();
	return 0;
}

void jeongsu()
{
	int jinsu;
	
	printf("8������ �Է��Ϸ��� 012, 16������ �Է��ϸ� 0x12ó�� �Է��ϼ���.\n");
	printf("����? ");
	scanf("%i", &jinsu);

	printf(" 8����: %.3o\n",jinsu);
	printf("10����: %d\n", jinsu);
	printf("16����: %#x\n", jinsu);

	return 0;
}
