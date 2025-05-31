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
#include <string.h> // strcmp �Լ��� ����ϱ� ���� ��� ���� ȣ��

// ���̵�� �н����带 �����ϱ� ���� ����ü ����
typedef struct LOGIN
{
	char id[30];
	char password[30];
}Login;

// �Է��� �޴� �Լ��� ���ϴ� �Լ� ����
void input(char idInput[], char pwInput[]);
void check(Login user[], char idInput[], char pwInput[]);

/*
	main �Լ�
	 ����ü �迭�� �����ϰ�(���̵�� ��й�ȣ üũ�� ���ڿ��� �Է���)
	�Է¹��� ���̵�� ��й�ȣ�� ������ ������ ����
	�Լ� ȣ���� ���� �α��� ���� �Ǵ� ���и� ��� ��
	���������� ���α׷��� �����ϴ� �Լ�
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
	input �Լ�
	 ���̵� �� ��й�ȣ�� �Է¹޴� �Լ�
*/
void input(char idInput[], char pwInput[])
{
	printf("ID? ");
	scanf("%s", idInput);

	printf("PW? ");
	scanf("%s", pwInput);
}

/*
	check �Լ�
	 �Էµ� ���̵� �� ��й�ȣ�� �̹� ����� ���̵� �� ��й�ȣ�� ���Ѵ�.
	���ǿ� ���� �α��� ����, ���и� ����Ѵ�.
*/
void check(Login user[], char idInput[], char pwInput[])
{
	for (int i = 0; i < 5; i++)
	{
		// �Է��� ���̵�� ����� ���̵� �������� ��
		if (strcmp(idInput, user[i].id) == 0)
		{
			// ��й�ȣ���� ��ġ�ϸ� �α��� ����
			if (strcmp(pwInput, user[i].password) == 0)
			{
				printf("�α��� ����");
			}
			else
			{
				printf("��й�ȣ Ʋ��");
			}

			// ���̵� ��ġ������ �� �̻��� �񱳰� �ʿ� �����Ƿ� �Լ� ��������
			return;
		}
	}
	
	// for���� �� �����ߴµ��� ��ġ�ϴ� ���̵� ���� ���
	printf("���̵� ����");
}