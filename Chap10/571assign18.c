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

typedef struct SONG
{
	char name[50];
	char artist[50];
	char genre[50];
	int time;
}Song;

void print(Song list[], int size);

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

void print(Song list[], int size)
{
	Song playlist[5] = { 0 };
	int timeTotal = 0;
	int index = 0;

	printf("	����	��Ƽ��Ʈ	�帣	����ð�\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d. %s	%s	%s	%d��\n", 
			i + 1, list[i].name, list[i].artist, list[i].genre, list[i].time);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
		scanf("%d", &index);

		if (index < 1 || index > size)
		{
			printf("�߸��� �� ��ȣ�Դϴ�.\n");
			i--;
			continue;
		}
	
		playlist[i] = list[index - 1];
		timeTotal += list[index - 1].time;

		printf("<< �÷��̸���Ʈ >>\n");
		for (int a = 0; a <= i; a++)
		{
			printf("%d.	%s	%s	%d��\n",
				a + 1, playlist[a].name, playlist[a].artist, 
				playlist[a].genre, playlist[a].time);
		}

		printf("�� ����ð� : %d��\n", timeTotal);
	}
}