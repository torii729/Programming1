/* ���ϸ�: 249assign09.c
   * ����: 09. �ܹ��� ������ ��꼭 ���α׷��� �ۼ��Ͻÿ�. �ܹ��Ŵ� 4000��, �ݶ�� 1500��, ����Ƣ���� 2000���̰�
   *		�� ������ ��Ʈ�� �ֹ��ϸ� 6500���̶�� ����. �ܹ���, �ݶ�, ����Ƣ���� ������ �Է¹޾Ƽ�
   *		�ִ��� ��Ʈ�� �����ϰ� �������� ��ǰ���� ����ϵ��� �Ѵ�.
   *		���� ��� �ܹ��� 2, �ݶ� 1, ����Ƣ�� 3�� �ֹ��ϸ� ����� ��Ʈ 1, �ܹ���1, ����Ƣ�� 2�� �ؾ� �Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void menu(int* potato, int* cola, int* ham);
void cul(int potato, int cola, int ham);

// ������ �ʱ�ȭ�ϰ� �Լ��� ȣ���ϴ� ����
int main()
{
	int potato = 0;
	int cola = 0;
	int ham = 0;
	

	menu(&potato, &cola, &ham);

	cul(potato, cola, ham);

	return 0;
}

// �ֹ� ������ �Է¹޴� ����
void menu(int* potato, int* cola, int* ham)
{
	printf("����Ƣ��? ");
	scanf("%d", potato);

	printf("�ݶ�? ");
	scanf("%d", cola);

	printf("�ܹ���? ");
	scanf("%d", ham);
}

// �Է¹��� �ֹ� ������ ���� ��Ʈ ���� �� �� ������ ����ϴ� ����
void cul(int potato, int cola, int ham)
{
	/*
		����Ƣ���� ���� �Է¹����Ƿ� �ϴ� ��Ʈ ���� ����Ƣ�� ���� ���ٰ� �Ͽ���.
		���� ���� �� �ʱ�ȭ ������ ��Ʈ ���� ����ϴ� �ڵ� �ۼ������� ����
	*/
	int set = potato;

	// ����
	int n_po = 2000;
	int n_co = 1500;
	int n_ha = 4000;
	int n_set = 6500;

	//
	int total = 0;

	// ����Ƣ��, �ݶ�, �ܹ��� �߿��� ���� ���� ����ŭ ��Ʈ ������ ���ϸ� �ȴ�.
	if (cola < set)
	{
		set = cola;
	}
	else if (ham < set)
	{
		set = ham;
	}

	// �� ���� ���
	total = (set * n_set) + (potato * n_po) + (cola * n_co) + (ham * n_ha);

	printf("��ǰ�� �ܰ�, ����, �ݾ�\n");
	if (set > 0)
	{
		printf("��Ʈ, ��Ʈ �� %d��, ���� ��Ʈ %d��Ʈ, �� %d���Դϴ�.", n_set, set, set * n_set);
	}
	if (set <= 0)
	{
		printf("��Ʈ ����, ����Ƣ�� %d, �ݶ� %d, �ܹ��� %d, �� %d���Դϴ�.", potato, cola, ham, total);
	}
}