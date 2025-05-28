/* 파일명: 323assign18.c
   * 내용: 18. 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오. 0~999 사이의 임의의 정수 3개를 생성하고
		divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.15
   */

/*
	핵심 문제는...
	0~999사이의 임의의 정수 생성하는 방법(문법을 모름)
	리턴값은 없고 매개변수만 있는 함수
	(늘 하던 것이지만 메인 함수에서 내가 새로 선언한 함수들을 모두 호출할 필요가 없어보임)

	임의의 정수 생성을 위해서는 헤더파일 <stdlib.h>을 불러내서 rand()함수를 사용할 필요가 있다.
	rand() % 1000을 하면 0~999 사이의 숫자 중 하나를 랜덤으로 생성한다.
*/

#include <stdio.h>
#include <stdlib.h> // rand()함수를 위하여 필요한 헤더파일

void create(int* random);
void divisors(int random);

int main(void)
{
	int random = 0;
	create(random);
	return 0;
}

// 0~999 사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 함수
void create(int* random)
{
	for (int i = 0; i < 3; i++)
	{
		random = rand() % 1000;
		divisors(random);
		printf("\n");
	}
}

// 정수의 약수를 구해서 출력하는 함수
void divisors(int random)
{
	// for문으로 약수 하나 구할때마다 횟수++하면 개수도 같이 출력할 수 있을듯

	int count = 0;
	printf("%d의 약수: ", random);

	for (int a = 1; a <= random; a++)
	{
		if (random % a == 0)
		{
			printf("%d ", a);
			count++;
		}
	}
	printf("=> 총 %d개", count);
}
