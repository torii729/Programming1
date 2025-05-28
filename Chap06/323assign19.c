/* 파일명: 323assign19.c
   * 내용: 19. 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수를 작성하시오.
   *	 예를 들어 graph(1200, 100);은 100마다 *를 출력하므로 *을 12개 출력하고, graph(1200, 10);은 10마다 *을 하나씩 출력하므로
   *	 *을 120개 출력한다. 0~9999 사이의 임의의 숫자 3개를 생성하고 스케일 100으로 그래프로 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.10
   */

   /*
	   핵심은
	   graph 함수를 호출할때 graph(1200, 100) 이렇게 해야된다는 것.
	   즉 graph 함수는 인자를 2개 받는다. (함수 선언 시 매개변수 2개 필요)
	   그리고 임의의 정수 생성하기, 리턴값은 없고 매개변수만 있는 함수 사용.

	   스케일 값이 n이면... *을 n마다 하나씩 출력해야한다.
   */

#include <stdio.h>
#include <stdlib.h> // 이 헤더 파일에는 rand() 함수도 있지만 srand() 함수도 있음
#include <time.h> // time() 함수를 쓰기 위해 헤더파일을 하나 더 불러옴

void create(void);
void graph(int data, int scale);

int main(void)
{
	/*
		rand() 함수를 쓸때 srand(time(NULL))을 함께 써주면 랜덤 값이 매번 달라진다.
		srand() 함수는 시드값을 설정해주는 함수이고
		time() 함수는 시간을 나타내는 함수로, time(NULL)처럼 쓰면 현재 시간을 반환한다는 의미이다.
		즉 srand(time(NULL)) 같이 쓰면 매 순간마다 시드값이 새로 설정된다는 의미로,
		rand() 함수를 썼을때 매번 다른 값이 생성되게 한다
	*/

	srand(time(NULL));
	create();
	return 0;
}

// 0~9999까지 정수를 임의로 3개 생성하는 함수
void create(void)
{
	for (int i = 0; i < 3; i++)
	{
		int data = rand() % 10000;
		graph(data, 100); // 문제에서 스케일은 100이라고 값을 고정해서 이렇게 적었음
	}

}

// create 함수에서 생성된 정수 3개를 가지고 그래프를 그리는 함수
void graph(int data, int scale)
{
	int count = data / scale;

	printf("%d : ", data);

	for (int a = 0; a < count; a++)
	{
		printf("*");
	}
	
	printf("\n");
}
