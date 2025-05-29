/* 파일명: 571assign18.c
   * 내용: 18. 음원 사이트의 플레이리스트 기능을 구현하려고 한다.
			이미 등록된 SONG 구조체 배열이 있을 때, 전체 곡 목록을 보여주고
			사용자로부터 플레이리스트에 추가할 노래를 번호로 선택하게 한다.
			플레이리스트에 노래를 추가할 때마다 플레이리스트의 곡 목록과 전체 재생 시간이 얼마인지를 출력한다.
			플레이리스트에는 최대 5곡만 등록할 수 있다.
   * 작성자: 강기민
   * 날짜: 2025.5.30
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

	printf("	제목	아티스트	장르	재생시간\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d. %s	%s	%s	%d초\n", 
			i + 1, list[i].name, list[i].artist, list[i].genre, list[i].time);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("플레이리스트에 추가할 곡 번호? ");
		scanf("%d", &index);

		if (index < 1 || index > size)
		{
			printf("잘못된 곡 번호입니다.\n");
			i--;
			continue;
		}
	
		playlist[i] = list[index - 1];
		timeTotal += list[index - 1].time;

		printf("<< 플레이리스트 >>\n");
		for (int a = 0; a <= i; a++)
		{
			printf("%d.	%s	%s	%d초\n",
				a + 1, playlist[a].name, playlist[a].artist, 
				playlist[a].genre, playlist[a].time);
		}

		printf("총 재생시간 : %d초\n", timeTotal);
	}
}