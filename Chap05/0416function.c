#include <stdio.h>

// �Լ��� ����
void f1(void);
int f3(int x, int y);


// �Լ��� ����
int main()
{
	int a = 3;

	// �Լ��� ȣ��
	f1();
	int result = f3(a, 2);

	return 0;
}

/*
	�Լ��� : void f1(void)
	��� : �ʹ� �����並 ���
	�Է� : -
	��ȯ : -
*/
void f1(void)
{
	// 1. �ʹ� ������ ����ϱ�
	printf("�ʹ� ������");

	/* 
	void f(void) �Լ��� �Է��� ���� �ʰ� ����� ��ȯ���� �ʱ� ������
	return �ڿ� 0 �̳� 1 ���� ������ �ʾƵ� �Ǵ� ��
	*/ 
	return;
}

/*
	�Լ��� : int f3(int x, int y)
	��� : �� �� x, y�� ���ؼ� ��ȯ
	�Է� : x, y�� ����
	��ȯ : ����
*/
int f3(int x, int y)
{
	int result = 0;

	// �� ���� ���ؼ� ��ȯ
	result = x + y;

	// ������ ��ȯ�ϱ� ������ ��������
	return result;
}

