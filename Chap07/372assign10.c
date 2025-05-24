/* ���ϸ�: 372assign10.c
   * ����: 10. 3 x 3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
   *		��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.
   * �ۼ���: �����
   * ��¥: 2025.5.23
   */

#include <stdio.h>

void array2D(void);
void arrayPlus(int X[][3], int Y[][3], int arrayXY[][3], int row, int col);
void print(char* name, int A[][3], int row, int col);

// �Լ��� ȣ���ϰ� ���α׷��� ���������� �����ϴ� �Լ�
int main()
{
	array2D();
	return 0;
}

/*
	������ ���� �� �ʱ�ȭ, �Լ� ȣ���� ���� �迭�� ���� ����ϰ�
	�迭���� ������ ����� ����ϴ� �Լ�
*/
void array2D(void)
{
	int arrayX[3][3] = { {10, 20, 30}, {40, 50, 60}, {70, 80, 90} };
	int arrayY[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
	int arrayXY[3][3] = { 0 };

	int row = 3;
	int col = 3;

	print("x", arrayX, row, col);
	print("y", arrayY, row, col);

	arrayPlus(arrayX, arrayY, arrayXY, row, col);
	print("x + y", arrayXY, row, col);
}

// �迭(���)�� ����ϴ� �Լ�
void print(char* name, int A[][3], int row, int col)
{
	printf("%s ��� : \n", name);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

// 2���� �迭 X, Y�� �������ִ� �Լ�
void arrayPlus(int X[][3], int Y[][3], int arrayXY[][3], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arrayXY[i][j] = X[i][j] + Y[i][j];
		}
	}
}