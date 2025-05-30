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
#include <string.h> // strcmp 함수를 사용하기 위한 헤더 파일 호출

// 아이디와 패스워드를 관리하기 위한 구조체 정의
typedef struct LOGIN
{
	char id[30];
	char password[30];
}Login;

// 입력을 받는 함수와 비교하는 함수 선언
void input(char idInput[], char pwInput[]);
void check(Login user[], char idInput[], char pwInput[]);

/*
	main 함수
	 구조체 배열을 선언하고(아이디와 비밀번호 체크용 문자열도 입력함)
	입력받을 아이디와 비밀번호를 저장할 변수를 선언
	함수 호출을 통해 로그인 성공 또는 실패를 출력 후
	정상적으로 프로그램을 종료하는 함수
*/
int main()
{
	Login user[5] = { "Guest","Idontknow", "guest", "idontknow" };

	char idInput[30];
	char pwInput[30];

	input(idInput, pwInput);
	check(user, idInput, pwInput);

	return 0;
}

/*
	input 함수
	 아이디 및 비밀번호를 입력받는 함수
*/
void input(char idInput[], char pwInput[])
{
	printf("ID? ");
	scanf("%s", idInput);

	printf("PW? ");
	scanf("%s", pwInput);
}

/*
	check 함수
	 입력된 아이디 및 비밀번호와 이미 저장된 아이디 및 비밀번호를 비교한다.
	조건에 따라서 로그인 성공, 실패를 출력한다.
*/
void check(Login user[], char idInput[], char pwInput[])
{
	for (int i = 0; i < 5; i++)
	{
		// 입력한 아이디와 저장된 아이디 변수끼리 비교
		if (strcmp(idInput, user[i].id) == 0)
		{
			// 비밀번호까지 일치하면 로그인 성공
			if (strcmp(pwInput, user[i].password) == 0)
			{
				printf("로그인 성공");
			}
			else
			{
				printf("비밀번호 틀림");
			}

			// 아이디가 일치했으면 더 이상의 비교가 필요 없으므로 함수 종료했음
			return;
		}
	}
	
	// for문을 다 실행했는데도 일치하는 아이디가 없는 경우
	printf("아이디 없음");
}