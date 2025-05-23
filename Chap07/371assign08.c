/* ���ϸ�: 371assign08.c
   * ����: 08. ��ǰ ������ ����� ������ �迭�� ���Ͽ� ������(%)�� �Է¹޾�
			���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�, 
			��ǰ ������ ����� �迭�� ũ��� 5�̰�, ��ǰ ������ �Է¹޾Ƽ� ����Ѵ�.
			���ε� ������ ������ �迭�� �����ؾ� �Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.5.22
   */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu();
void calculate(int array[], int arrayDisc[], int discount, int size);
void printArray(int array[], int arrayDisc[], int size);

int main()
{
	menu();
	return 0;
}

void menu()
{
	int array[5] = { 0 };
	int arrayDisc[5] = { 0 };

	int size = sizeof(array) / sizeof(array[0]);
	int discount = 0;

	printf("��ǰ�� 5���� �Է��ϼ��� : ");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("������(%%)? ");
	scanf("%d", &discount);

	calculate(array, arrayDisc, discount, size);
	printArray(array, arrayDisc, size);
}

void calculate(int array[], int arrayDisc[], int discount, int size)
{
	double disc = (100.0 - discount) / 100.0;

	for (int j = 0; j < size; j++)
	{
		arrayDisc[j] = (int)(array[j] * disc);
	}
}

void printArray(int array[], int arrayDisc[], int size)
{
	for (int a = 0; a < size; a++)
	{
		printf("���� : %d --> ���ΰ� : %d\n", array[a], arrayDisc[a]);
	}
}