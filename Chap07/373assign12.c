/* ���ϸ�: 373assign12.c
   * ����: 12. ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����.
   *		������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ���¸� ����Ѵ�.
   *		O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.5.22
   */

   /*
	   ��ü���� �帧
	   1. ���� �¼� ���� ���
	   2. ���� �¼� �� Ȯ��
	   3. o�� �¼����� �����ϸ� ����
	   3-1. ���� �¼� ������ ���� �¼��� �����Ϸ� �Ҷ� ���Ű� �Ұ����ϹǷ� ����
	   4. �¼� ���� ���
	   5. 1~4�� �ݺ�
   */

   /*
	   ���Ű� �Ұ����� ������ ��� �¼� ���Ÿ� �ݺ��ؾ� �ϹǷ� while���̳� for��
	   �¼��� ��� ������ �Ǹ�(��� X�� ���) ����
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sit();
void sitPrint(int sitTrain[], int size);
void sitInput(int sitTrain[], int size);
void sitCheck(int sitTrain[], int size);

int main()
{
	sit();
	return 0;
}

void sit()
{
	int sitTrain[10] = { 0 };
	int size = sizeof(sitTrain) / sizeof(sitTrain[0]);

	sitInput(sitTrain, size);
}

void sitPrint(int sitTrain[], int size)
{
	printf("���� �¼� : [ ");
	for (int i = 0; i < size; i++)
	{
		if (sitTrain[i] == 0)
		{
			printf("O ");
		}
		else
		{
			printf("X ");
		}
	}
	printf("]\n");
}

void sitInput(int sitTrain[], int size)
{
	int num = 0;

	while (1)
	{
		int sitReserved[10] = { 0 };
		int reserved = 0;
		int remain = 0;

		sitPrint(sitTrain, size);
		printf("������ �¼���? ");
		scanf("%d", &num);

		for (int i = 0; i < size; i++)
		{
			if (sitTrain[i] == 0)
			{
				remain++;
			}
		}

		if (remain < num)
		{
			printf("���� �¼��� �����մϴ�.\n");
			break;
		}

		for (int i = 0; reserved < num && i < size; i++)
		{
			if (sitTrain[i] == 0)
			{
				sitTrain[i] = 1;
				sitReserved[reserved] = i + 1;
				reserved++;
			}
		}

		for (int j = 0; j < reserved; j++)
		{
			printf("%d ", sitReserved[j]);
		}
		printf("�� �¼��� �����߽��ϴ�.");
	}

	sitCheck(sitTrain, size);

}

void sitCheck(int sitTrain[], int size)
{
	int all = 1;

	for (int i = 0; i < size; i++)
	{
		if (sitTrain[i] == 0)
		{
			all = 0;
			break;
		}

		if (all == 1)
		{
			printf("��� �¼� ���� �Ϸ�.");
			break;
		}
	}
}
