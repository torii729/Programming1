/* ���ϸ�: 319assign06.c
   * ����: 06. ������ ���� �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� choose_menu �Լ��� �ۼ��Ͻÿ�.
   *	�߸��� ��ȣ�� �����ϸ� �ùٸ� ��ȣ�� ������ ������ ��� �޴��� ����ϰ� �ٽ� ���ù޾ƾ� �Ѵ�.
   *	��, choose_menu �Լ��� �ݵ�� 0~3 ������ ���� �����ؾ� �Ѵ�.
   *	choose_menu�� ���ϰ��� ���� � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.10
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(int* num);
void print(int menu);

int main(void)
{
	int num = 0;
	int menu = choose_menu(&num);
	
	print(menu);

	return 0;
}

int choose_menu(int* num)
{
	while (1)
	{
		printf("[1. ���� ����  2. ���� ����  3. �μ�  0. ����] ����? ");
		scanf("%d", num);

		if (*num >= 0 && *num <= 3)
		{
			return *num;
		}
	}
}

void print(int menu)
{
	if (menu == 1)
	{
		printf("���� ���⸦ �����մϴ�.");
	}
	else if (menu == 2)
	{
		printf("���� ������ �����մϴ�.");
	}
	else if (menu == 3)
	{
		printf("�μ⸦ �����մϴ�.");
	}
	else
	{
		printf("�����մϴ�.");
	}
}