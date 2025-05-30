/* 파일명: 565assign01.c
   * 내용: 01. 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
			아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
			LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
			패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.29
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 아이디와 패스워드를 관리하기 위한 구조체 정의
typedef struct LOGIN
{
	char id[30];
	char password[30];
}Login;

// 입력을 받는 함수와 출력하는 함수 선언
void input(Login * user);
void print(Login user);

/*
	main 함수
	 구조체 변수를 선언하고	함수에 그 변수를 매개변수로 넘기면서
	정상적으로 프로그램을 종료하는 함수
*/
int main()
{
	Login user;

	input(&user);
	print(user);

	return 0;
}

/*
	input 함수
	 Login 구조체 변수인 user를 포인터로 전달받고
	입력받은 값을 구조체의 멤버에 저장한다.
*/
void input(Login * user)
{
	printf("ID? ");
	scanf("%s", user->id);

	printf("Password? ");
	scanf("%s", user->password);
}

/*
	print 함수
	 input 함수를 통해 값을 받은 구조체 변수 user를 이용해
	ID와 Password를 출력하는 함수.
*/
void print(Login user)
{
	printf("ID : %s \n", user.id);

	printf("Password : ");

	/*
		입력받은 password 문자열의 길이만큼 반복한다.
		각 문자를 '*'로 출력한다.
	*/
	for (int i = 0; user.password[i] != '\0'; i++)
	{
		printf("*");
	}
}