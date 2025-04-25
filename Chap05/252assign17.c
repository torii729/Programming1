/* ���ϸ�: 252assign17.c
   * ����: 17. ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   *		���� ����� ���� 30���� 2000��, �� ���Ĵ� 10�д� 1000������ ����ϸ�, �Ϸ� �ִ� 25000����
   *		���� �� ����. ���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void time(int* min);
void money(int min, int parking);

// ������ �ʱ�ȭ�ϰ� �Լ��� ȣ���ϴ� ����
int main()
{
	int min = 0;
	int parking = 0;

	time(&min);
	money(min, parking);
	return 0;
}

// ���� �ð��� �Է¹޴� ����
void time(int* min)
{
	printf("���� �ð�(��)? ");
	scanf("%d", min);
}

// �Է¹��� ���� �ð� ������ �̿��� ���ǿ� �°� ��� ����� �ϴ� ����
void money(int min, int parking)
{
	if (min > 1440)
	{
		printf("���� �ð��� 24�ð�(1440��)�� ���� �� �����ϴ�.");
		return;
	}
	else if (min <= 30)
	{
		printf("���� ���: 2000��");
	}
	else if (min > 30)
	{
		parking = 2000 + (min - 30) / 10 * 1000;

		if (parking > 25000)
		{
			printf("���� ���: 25000��");
		}
		else
		{
			printf("%d��", parking + 1000);
		}
	}
}