/* ���ϸ�: 565assign03.c
   * ����: 03. LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
			���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ����
			�Է¹��� �н������ ��ϵ� �н�����Ŭ ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�.
			LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.5.29
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
				printf("�α��� ����");
			}
			else
			{
				printf("��й�ȣ Ʋ��");
			}
			return;
		}
	}
	
	printf("���̵� ����");
}