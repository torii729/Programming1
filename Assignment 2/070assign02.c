/* ���ϸ�: 070assign02.c
   * ����: 02. �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		�л��� ��ȣ�� ������, ������ �Ǽ��� �Է¹޴´�.
   * �ۼ���: �����
   * ��¥: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

//����� ���̺귯��
#include <stdio.h>

//������ �й��� �Է¹��� �Լ� ����
void score(void);

int main()
{
	score();
	return 0;

}

void score()
{
	//��ȣ�� ������ ������ ���� ����
	int num;
	float gra;

	//��ȣ�� ������ ���� �Է¹���
	printf("��ȣ? ");
	scanf("%d", &num);

	printf("����? ");
	scanf("%f", &gra);

	//�Է¹��� ���� ���
	printf("%d�� �л��� ������ %f�Դϴ�.", num, gra);
}