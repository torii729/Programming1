/* ���ϸ�: 571assign18.c
   * ����: 18. ���� ����Ʈ�� �÷��̸���Ʈ ����� �����Ϸ��� �Ѵ�.
			�̹� ��ϵ� SONG ����ü �迭�� ���� ��, ��ü �� ����� �����ְ�
			����ڷκ��� �÷��̸���Ʈ�� �߰��� �뷡�� ��ȣ�� �����ϰ� �Ѵ�.
			�÷��̸���Ʈ�� �뷡�� �߰��� ������ �÷��̸���Ʈ�� �� ��ϰ� ��ü ��� �ð��� �������� ����Ѵ�.
			�÷��̸���Ʈ���� �ִ� 5� ����� �� �ִ�.
   * �ۼ���: �����
   * ��¥: 2025.5.30
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �뷡 ������ ������ ����ü ����
typedef struct SONG
{
	char name[50];
	char artist[50];
	char genre[50];
	int time;
}Song;

// ����� �Լ� ����
void print(Song list[], int size);

/*
	main �Լ�
	 ����ü �迭�� �迭�� ũ�⸦ �����ϴ� ������ ���� �� �ʱ�ȭ�ϰ�
	 �Լ� ȣ���� ���� �� ������ �÷��̸���Ʈ�� ����ϴ� �Լ�
*/
int main()
{
	Song list[] = {
		{"Lucky Doki", "DORIDORI", "pop", 187},
		{"Flashback (Extended Mix)", "ARForest", "edm", 279},
		{"Day by Day (feat. Nicole Curry)", "lapix", "edm", 237},
		{"Falling Down (feat. Renko, TRIANGLE)", "Zekk", "edm", 198},
		{"Tic! Tac! Toe!", "TAK, Corbin", "pop", 208},
		{"Cosmos", "Aiyru, Malt", "edm", 307},
		{"MATOI", "awfuless, Zekk", "edm", 265},
	};
	int size = sizeof(list) / sizeof(list[0]);

	print(list, size);
	return 0;
}

/*
	print �Լ�
	 ��ü �� ������ ����ϰ� �÷��̸���Ʈ�� �߰��� ���� �Է¹ް�
	�÷��̸���Ʈ�� ���� �߰��� ������ ���� �÷��̸���Ʈ�� ����ϴ� �Լ�
*/
void print(Song list[], int size)
{
	Song playlist[5] = { 0 }; // Song ����ü �迭(�÷��̸���Ʈ)�� ���� �� �ʱ�ȭ 
	int timeTotal = 0; // �� ��� �ð��� ������ ����
	int index = 0; // �� ��ȣ�� ������ ����

	// �� ��� ���
	printf("	����	��Ƽ��Ʈ	�帣	����ð�\n");

	// ��ü �� ����� for������ ���
	for (int i = 0; i < size; i++)
	{
		// �������, �� ��ȣ, �� ����, ��Ƽ��Ʈ��, �帣��, ����ð� ���
		printf("%d. %s	%s	%s	%d��\n", 
			i + 1, list[i].name, list[i].artist, list[i].genre, list[i].time);
	}

	// �÷��̸���Ʈ�� ���� �߰��ϴ� �ݺ���
	for (int i = 0; i < 5; i++)
	{
		// �� ��ȣ�� �Է¹���
		printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
		scanf("%d", &index);

		/*
			if������ �Էµ� �� ��ȣ�� 1���� size(���� 7)������ �ִ��� Ȯ���Ѵ�.
			�ش� if���� 1���� size ���̿� ���� ���� ����̴�.

			�߸��� �� ��ȣ���� ����� �� �ݺ������� ���̰�(�ٽ� �����ϱ� ����)
			continue Ű����� ���� �ݺ����� �Ѿ�� �ʰ� ���� �ݺ��� �������� ���ư���.
		*/
		if (index < 1 || index > size)
		{
			
			printf("�߸��� �� ��ȣ�Դϴ�.\n");
			i--;
			continue;
		}
	
		/*
			�Է��� �� ��ȣ�� 1���� size(���� 7)������ �ִ� ���.
			�迭 �ε����� 0���� �����ϹǷ� (�Է��� �� ��ȣ - 1)�� �Ѵ�.
		*/
		playlist[i] = list[index - 1];
		timeTotal += list[index - 1].time; // �� ��� �ð��� ���� �߰��� �� ��� �ð� �߰�

		// �÷��̸���Ʈ ����ϱ�
		printf("<< �÷��̸���Ʈ >>\n");
		for (int a = 0; a <= i; a++)
		{
			// ������� �� ��ȣ, ���, ��Ƽ��Ʈ��, �帣��, ����ð� ���
			printf("%d.	%s	%s	%d��\n",
				a + 1, playlist[a].name, playlist[a].artist, 
				playlist[a].genre, playlist[a].time);
		}

		// ���� �÷��̸���Ʈ�� �� ��� �ð� ���
		printf("�� ����ð� : %d��\n", timeTotal);
	}
}