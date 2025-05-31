/* ���ϸ�: 565assign01.c
   * ����: 01. ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
			���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
			LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
			�н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.29
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���̵�� �н����带 �����ϱ� ���� ����ü ����
typedef struct LOGIN
{
	char id[30];
	char password[30];
}Login;

// �Է��� �޴� �Լ��� ����ϴ� �Լ� ����
void input(Login * user);
void print(Login user);

/*
	main �Լ�
	 ����ü ������ �����ϰ�	�Լ��� �� ������ �Ű������� �ѱ�鼭
	���������� ���α׷��� �����ϴ� �Լ�
*/
int main()
{
	Login user;

	input(&user);
	print(user);

	return 0;
}

/*
	input �Լ�
	 Login ����ü ������ user�� �����ͷ� ���޹ް�
	�Է¹��� ���� ����ü�� ����� �����Ѵ�.
*/
void input(Login * user)
{
	printf("ID? ");
	scanf("%s", user->id);

	printf("Password? ");
	scanf("%s", user->password);
}

/*
	print �Լ�
	 input �Լ��� ���� ���� ���� ����ü ���� user�� �̿���
	ID�� Password�� ����ϴ� �Լ�.
*/
void print(Login user)
{
	printf("ID : %s \n", user.id);

	printf("Password : ");

	/*
		�Է¹��� password ���ڿ��� ���̸�ŭ �ݺ��Ѵ�.
		�� ���ڸ� '*'�� ����Ѵ�.
	*/
	for (int i = 0; user.password[i] != '\0'; i++)
	{
		printf("*");
	}
}