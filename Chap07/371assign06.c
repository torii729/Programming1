/* ���ϸ�: 371assign06.c
   * ����: 06. ũ�Ⱑ 10�� �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
   *		�Ǽ��� �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.22
   */

#include <stdio.h>

void array();
void printArray(double arrayDouble[], int size);
void ArrayRe(double arrayDouble[], int size);

// �Լ��� ȣ���ϰ� ���α׷��� ���������� �����ϴ� �Լ�
int main()
{
	array();
	return 0;
}

/*
	������ ���� �� �ʱ�ȭ, �Լ��� ȣ���� ���� ���� �迭�� ����ϰ� 
	���� �迭�� �޾ƿ� ���� �迭�� ����ϴ� �Լ�
*/
void array()
{
	double arrayDouble[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int size = sizeof(arrayDouble) / sizeof(arrayDouble[0]);

	printf("�迭 : ");
	printArray(arrayDouble, size);

	ArrayRe(arrayDouble, size);

	printf("���� : ");
	printArray(arrayDouble, size);
}

// �迭�� ����ϴ� �Լ�
void printArray(double arrayDouble[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%.1lf ", arrayDouble[i]); /*
											�迭 �� ������ ��� �Ҽ��� ù°�ڸ����� ������ ���̹Ƿ�
											%.1lf�� ��Ȯ�� ����� �� �ֵ��� �ߴ�.
											*/
	}				
											
	printf("\n");
}

// �迭�� �������� �ٲٴ� �Լ�
void ArrayRe(double arrayDouble[], int size)
{
	/*
		size / 2�� ������ �ѹ� ���� �ڸ��� ��ü�ϸ�
		��ü�ߴ� ���Ҹ� �ٽ� ���� ��ġ�� ���ư��� �Ѵ�.
		�׷��� ���ݱ����� �ݺ� ������ �ϴ� ���̴�.
	*/

	for (int a = 0; a < (size / 2); a++)
	{
		double base = arrayDouble[a];

		/*
			a�� 0�϶�, size - 1 - a�� 10 - 1 - 0 = 9�̹Ƿ�
			0�� 9�� ¦�� �ȴ�. �� ���� ������ base�� �ӽ÷� ������ �ڿ�
			0��°(ù��°) ���ҿ� 9��°(10��°) ������ ��ġ�� �ٲٴ� ���̴�.
		*/
		arrayDouble[a] = arrayDouble[size - 1 - a];
		arrayDouble[size - 1 - a] = base;
	}
}