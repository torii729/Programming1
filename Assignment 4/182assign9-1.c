/* ���ϸ�: 182assign9-1.c
   * ����: 09. �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������
   *	����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.4.11
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �ð��� ����� �Լ� ����
void time(void);

// ���� �Լ�, �ð��� ����� �Լ��� ȣ����
int main()
{
	time();
	return 0;
}

void time()
{
	int total_cho = 0;
	int hour = 0;
	int min = 0;
	int sec = 0;

	printf("����ð�(��)? ");
	scanf("%d", &total_cho);

	/*
		�ʸ� 3600���� ������ �ð� ������ ȯ���ϰ�
		�������� 60���� ���� �� ������ ȯ����
		�׸��� 60�� ������ ���� �� �ִ� �κ��� ������ �������� ����
	*/
	hour = total_cho / 3600;
	min = (total_cho % 3600) / 60;
	sec = total_cho % 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�.", hour, min, sec);

	return 0;
}