/* ���ϸ�: 071assign05.c
   * ����: 05. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		�����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void wei(void);

int main()
{
	wei();
	return 0;
}

void wei()
{
	double weight;

	printf("������? ");
	scanf("%lf", &weight);

	printf("�Է��� �����Դ� %.2lfKG�Դϴ�.", weight);
	
	return 0;
}