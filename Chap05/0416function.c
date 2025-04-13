#include <stdio.h>

// 함수의 선언
void f1(void);
int f3(int x, int y);


// 함수의 정의
int main()
{
	int a = 3;

	// 함수의 호출
	f1();
	int result = f3(a, 2);

	return 0;
}

/*
	함수명 : void f1(void)
	기능 : 너무 졸려요를 출력
	입력 : -
	반환 : -
*/
void f1(void)
{
	// 1. 너무 졸려요 출력하기
	printf("너무 졸려요");

	/* 
	void f(void) 함수는 입력을 받지 않고 결과도 반환하지 않기 때문에
	return 뒤에 0 이나 1 등을 붙이지 않아도 되는 듯
	*/ 
	return;
}

/*
	함수명 : int f3(int x, int y)
	기능 : 두 수 x, y를 더해서 반환
	입력 : x, y는 정수
	반환 : 정수
*/
int f3(int x, int y)
{
	int result = 0;

	// 두 수를 더해서 반환
	result = x + y;

	// 정수를 반환하기 때문에 문제없음
	return result;
}

