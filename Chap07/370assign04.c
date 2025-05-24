/* ���ϸ�: 370assign04.c
   * ����: 04. Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ�
		�ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
		�迭�� �ʱⰪ�� ������� ���Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.22
   */

/*
	�ٽ� ����
	�ִ񰪰� �ּڰ��� ��� �˾Ƴ� ���ΰ�?
	�ε��� ����ϴ� ���?
*/

#include <stdio.h>

void array();
void maxArray(int arrayInt[], int size);
void minArray(int arrayInt[], int size);
void printArray(int arrayInt[], int size);

// �Լ��� ȣ���ϰ� ���������� ���α׷��� �����ϴ� �Լ�
int main()
{
	array();
	return 0;
}

// ������ ���� �� �ʱ�ȭ, �Լ� ȣ���� ���� �迭�� �ִ񰪰� �ּڰ��� ���ϴ� �Լ�
void array()
{
	int arrayInt[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int size = sizeof(arrayInt) / sizeof(arrayInt[0]);

	printArray(arrayInt, size);
	maxArray(arrayInt, size);
	minArray(arrayInt, size);	
}

// �迭�� ����ϴ� �Լ�
void printArray(int arrayInt[], int size)
{
	printf("�迭 : ");

	for (int n = 1; n < size; n++)
	{
		printf("%d ", arrayInt[n]);
	}
	printf("\n");
}

// �迭 �� �ִ��� ã�� �Լ�
void maxArray(int arrayInt[], int size)
{
	int max = arrayInt[0];
	int maxIndex = 0;

	for (int i = 1; i < size; i++)
	{
		if (arrayInt[i] > max)
		{
			max = arrayInt[i];
			maxIndex = i; /*
							0���� �ʱ�ȭ�� ������ �ε����� �ִ��� ���� �ݺ������� �����Ͽ�
							�ִ��� ���� �ε����� ����� �� �ִ�.
							*/
		}
	}

	printf("�ִ� : �ε��� = %d, �� = %d\n", maxIndex, max);
}

// �迭 �� �ּڰ��� ã�� �Լ�
void minArray(int arrayInt[], int size)
{
	int min = arrayInt[0];
	int minIndex = 0;

	for (int j = 1; j < size; j++)
	{
		if (arrayInt[j] < min)
		{
			min = arrayInt[j];
			minIndex = j;
		}
	}

	printf("�ּڰ� : �ε��� = %d, �� = %d", minIndex, min);
}