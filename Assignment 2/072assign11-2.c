/* ���ϸ�: 072assign11.c
   * ����: 11. ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		�Ҽ��� ���� 2�ڸ�����, �Ҽ��� ���� 4�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ����ϰ�, ���� ǥ��ε� ����غ���.
   * �ۼ���: �����
   * ��¥: 2025.3.20
   * double�� ������ ��� */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void own(void);

int main()
{
	own();
	return 0;
}

void own()
{
	double ownju = 3.14159265;

	printf("pi = %.2f\n", ownju);
	printf("pi = %.4f\n", ownju);
	printf("pi = %.6f\n", ownju);
	printf("pi = %.8f\n", ownju);
	printf("pi = %e\n", ownju);

	return 0;
}