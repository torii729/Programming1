/* ���ϸ�: 126assign10.c
   * ����: 10. ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ�
   *	���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void own(void);

int main()
{
	own();
	return 0;
}

void own(void)
{

	// ���� ���� �� �ʱ�ȭ
	float u = 0; 
	float e = 0;

	//�޷� �Է¹ޱ�
	printf("USD? ");
	scanf("%f", &u);
	
	//���� ȯ�� �Է¹ޱ�
	printf("��/�޷� ȯ��? ");
	scanf("%f", &e);

	// ȯ�� ���(�޷� -> ��)
	float krw = u * e;

	printf("USD %.2f = KRW %.2f\n", u, krw);

	return 0;
}