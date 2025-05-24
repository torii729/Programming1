/* ���ϸ�: 373assign12.c
   * ����: 12. ����ǥ ���� ���α׷��� �ۼ��Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10����� ����.
   *		������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ���¸� ����Ѵ�.
   *		O�̸� ���� ����, X�� ���� �Ұ��� �ǹ��Ѵ�. �� �̻� ������ �� ������ ���α׷��� �����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.5.23
   */

   /*
	   ��ü���� �帧 ����
	   1. ���� �¼� ���� ���
	   2. ���� �¼� �� Ȯ��
	   3. o�� �¼����� �����ϸ� ����
	   3-1. ���� �¼� ������ ���� �¼��� �����Ϸ� �Ҷ� ���Ű� �Ұ����ϹǷ� ����
	   4. �¼� ���� ���
	   5. 1~4�� �ݺ�
   */

   /*
	   ���Ű� �Ұ����� ������ ��� �¼� ���Ÿ� �ݺ��ؾ� �ϹǷ� while���̳� for��
	   �¼��� ��� ������ �Ǹ�(��� X�� ���) ���� break��
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sit();
void sitPrint(int sitTrain[], int size);
void sitInput(int sitTrain[], int size);
void sitCheck(int sitTrain[], int size);

// �Լ��� ȣ���ϰ� ���α׷��� ���������� �����ϴ� �Լ�
int main()
{
	sit();
	return 0;
}

// ������ ���� �� �ʱ�ȭ, �Լ��� ȣ�������ν� ���� �ǽ�
void sit()
{
	int sitTrain[10] = { 0 };
	int size = sizeof(sitTrain) / sizeof(sitTrain[0]);

	sitInput(sitTrain, size);
}

// ���� �¼��� ����ϴ� �Լ�
void sitPrint(int sitTrain[], int size)
{
	printf("���� �¼� : [ ");

	// �¼��� ���� 0�̸� 'O'�� ����ϰ�, ���� 1�̸� 'X'�� ����Ѵ�.
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

// �¼� ������ �Է¹޴� �Լ�
void sitInput(int sitTrain[], int size)
{
	int num = 0;

	while (1)
	{
		int sitReserved[10] = { 0 }; // ����ϱ� ���ϰ� ����� �¼��� ���� �迭�� ���� ����.
		int reserved = 0; // �̹� ����� �¼� ��
		int remain = 0; // ���� �¼� ��

		// �Լ� ȣ���� ���� ���� �¼��� ����Ѵ�.
		sitPrint(sitTrain, size);

		printf("������ �¼���? ");
		scanf("%d", &num);


		// ���� �¼� ���� ����Ѵ�.
		for (int i = 0; i < size; i++)
		{
			if (sitTrain[i] == 0)
			{
				remain++;
			}
		}

		/*
			������ �¼� ���� ���� �¼� ������ ������,
			���� �¼��� �����ϴٴ� ����� �Բ� ���α׷� ����.
		*/ 
		if (remain < num)
		{
			printf("���� �¼��� �����մϴ�.\n");
			break;
		}

		// ���� ������ �¼��� ������� ����.
		for (int i = 0; reserved < num && i < size; i++)
		{
			if (sitTrain[i] == 0)
			{
				sitTrain[i] = 1; // �¼��� 0 -> 1�� ����
				sitReserved[reserved] = i + 1; /*
													����ڿ��� �¼� ��ȣ�� 1���� �����ֱ� ����.
													���� ��� �����ϰ� ���� �¼� ���� 5��� �� �迭��
													sitReserved[10] = { 1, 2, 3, 4, 5, 0, 0, 0, 0, 0 }�� �ȴ�.
												*/
				reserved++; // �̹� ����� �¼� ���� �ϳ��� ����
			}
		}

		// ����� �¼� ��ȣ�� ���.
		for (int j = 0; j < reserved; j++)
		{
			printf("%d ", sitReserved[j]);
		}
		printf("�� �¼��� �����߽��ϴ�.");
	}

	sitCheck(sitTrain, size);

}

// ���� �¼��� �˻��ϴ� �Լ�
void sitCheck(int sitTrain[], int size)
{
	int all = 1; // �¼��� �̹� �� á�ٴ�(1) ������ �д�.

	for (int i = 0; i < size; i++)
	{
		if (sitTrain[i] == 0)
		{
			all = 0; // �¼� ������ ��� ������Ƿ� 0���� �ٲٰ� �����Ѵ�.
			break;
		}

		if (all == 1)
		{
			printf("��� �¼� ���� �Ϸ�."); /* 
												�¼��� ��� 1�϶� �� if���� ����ȴ�.
												�� ������ ����ϰ� ���α׷��� ����.
												*/
			break;
		}
	}
}
