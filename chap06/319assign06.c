/* 파일명: 319assign06.c
   * 내용: 06. 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하시오.
   *	잘못된 번호를 선택하면 올바른 번호를 선택할 때까지 계속 메뉴를 출력하고 다시 선택받아야 한다.
   *	즉, choose_menu 함수는 반드시 0~3 사이의 값을 리턴해야 한다.
   *	choose_menu의 리턴값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(int* num);
void print(int menu);

// 변수 선언 및 초기화하고 함수를 호출하는 함수
int main(void)
{
	int num = 0;
	int menu = choose_menu(&num);
	
	print(menu);

	return 0;
}

// num을 입력받아 num이 0부터 3 사이에 있다면 num 값을 반환하는 함수
int choose_menu(int* num)
{
	while (1)
	{
		printf("[1. 파일 열기  2. 파일 저장  3. 인쇄  0. 종료] 선택? ");
		scanf("%d", num);

		if (*num >= 0 && *num <= 3)
		{
			return *num;
		}
	}
}

// 전달받은 menu 값에 따라 출력하는 함수
void print(int menu)
{
	if (menu == 1)
	{
		printf("파일 열기를 수행합니다.");
	}
	else if (menu == 2)
	{
		printf("파일 저장을 수행합니다.");
	}
	else if (menu == 3)
	{
		printf("인쇄를 수행합니다.");
	}
	else
	{
		printf("종료합니다.");
	}
}