/* ���ϸ�: 124assign03.c
   * ����: 03. ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
   *	������ kg ����, ���̴� m ������ �Է¹޴´�.
   * �ۼ���: �����
   * ��¥: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void wichi(void);

int main()
{
	wichi();
	return 0;
}

void wichi(void) {

	//���� ���� �� �ʱ�ȭ(����, ����, ��ġ������)
	float m = 0;
	float h = 0;
	float e = 0;

	printf("����(kg)?: ");
	scanf("%f", &m);
	
	printf("����(m)?: ");
	scanf("%f", &h);

	e = 9.8 * m * h; // ��ġ������ = 9.8 * ���� * ���� 
	
	printf("��ġ������: %.6f J", e); // ��ġ������ �� �Ҽ��� 6�ڸ� ���
	
	return 0;
}