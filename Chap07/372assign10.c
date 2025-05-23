/* 파일명: 372assign10.c
   * 내용: 10. 3 x 3 행렬의 합을 구하는 프로그램을 작성하시오.
   *		행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
   * 작성자: 강기민
   * 날짜: 2025.5.23
   */

#include <stdio.h>

void array2D(void);
void arrayPlus(int X[][3], int Y[][3], int arrayXY[][3], int row, int col);
void print(char* name, int A[][3], int row, int col);

// 함수를 호출하고 프로그램을 정상적으로 종료하는 함수
int main()
{
	array2D();
	return 0;
}

/*
	변수의 선언 및 초기화, 함수 호출을 통해 배열을 각각 출력하고
	배열끼리 덧셈한 결과도 출력하는 함수
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

// 배열(행렬)을 출력하는 함수
void print(char* name, int A[][3], int row, int col)
{
	printf("%s 행렬 : \n", name);

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

// 2차원 배열 X, Y를 덧셈해주는 함수
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