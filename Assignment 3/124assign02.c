/* ���ϸ�: 124assign02.c
   * ����: 02. ������ ���̿� ������ ���̸� �Է¹޾� ���簢����
   *	���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.4.4
   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����� �Լ� ����
void Nemo(void);

int main()
{
	Nemo();
	return 0;
}

void Nemo(void) {
	//���� ���� �� �ʱ�ȭ(����, �ѷ�)
	int w = 0; 
	int h = 0;

	//����, ���� ���� �Է¹ޱ�
	printf("������ ����? ");
	scanf("%d", &w);

	printf("������ ����? ");
	scanf("%d", &h);

	printf("���簢���� ����: %d\n", w * h);
	printf("���簢���� �ѷ�: %d\n", w * 2 + h * 2);

	return 0;
}