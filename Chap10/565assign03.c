/* 파일명: 565assign03.c
   * 내용: 03. LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
			아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음
			입력받은 패스워드와 등록된 패스워드클 비교해서 갈으면 "로그인 성공"이라고 출력한다.
			LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.
   * 작성자: 강기민
   * 날짜: 2025.5.29
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct LOGIN
{
	char id[30];
	char password[30];
}Login;

void input(char idInput[], char pwInput[]);
void check(Login user[], char idInput[], char pwInput[]);

int main()
{
	Login user[5] = { "Guest","Idontknow", "guest", "idontknow" };

	char idInput[30];
	char pwInput[30];

	input(idInput, pwInput);
	check(user, idInput, pwInput);

	return 0;
}

void input(char idInput[], char pwInput[])
{
	printf("ID? ");
	scanf("%s", idInput);

	printf("PW? ");
	scanf("%s", pwInput);
}

void check(Login user[], char idInput[], char pwInput[])
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(idInput, user[i].id) == 0)
		{
			if (strcmp(pwInput, user[i].password) == 0)
			{
				printf("로그인 성공");
			}
			else
			{
				printf("비밀번호 틀림");
			}
			return;
		}
	}
	
	printf("아이디 없음");
}