/* ���ϸ�: 247assign05.c
   * ����: 05. �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
   *		"27 C" �Ǵ� "27 F"ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�.
   *		�Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ� ȭ�� �µ��� ���ؼ� ����ϰ�, �Էµ� ���ڰ� 'F'�� ȭ�� �µ��̹Ƿ�
   *		���� �µ��� ���ؼ� ����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scan(double* sup, char* ha);
void cul(double sup, char ha);

// ������ �ʱ�ȭ�ϰ� �Լ��� ȣ���ϴ� ����
int main()
{
	double sup = 0;
	char ha = 0;
	scan(&sup, &ha);
	cul(sup, ha);

	return 0;
}

// �µ��� �Է¹޴� ����
void scan(double* sup, char* ha)
{
	printf("�µ�? ");
	scanf("%lf %c", sup, ha);
}

/*
	�Է¹��� �µ��� ������ ��쿣 ȭ�� �µ��� ��ȯ�ϰ�
	ȭ���� ��쿣 ���� �µ��� ��ȯ�ϵ��� ����ϰ� ����ϴ� ����
*/ 
void cul(double sup, char ha)
{
	if (ha == 'C')
	{
		double f = (sup * (9.0 / 5.0)) + 32;
		printf("%.2lf C ==> %.2f F", sup, f);
	}
	else if (ha == 'F')
	{
		double c = (sup - 32) * (9.0 / 5.0);
		printf("%.2lf F ==> %.2f C", sup, c);
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�");
	}
}