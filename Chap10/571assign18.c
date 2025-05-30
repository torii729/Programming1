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

// 노래 정보를 저장할 구조체 선언
typedef struct SONG
{
	char name[50];
	char artist[50];
	char genre[50];
	int time;
}Song;

// 출력할 함수 선언
void print(Song list[], int size);

/*
	main 함수
	 구조체 배열과 배열의 크기를 저장하는 변수를 선언 및 초기화하고
	 함수 호출을 통해 곡 정보와 플레이리스트를 출력하는 함수
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
	print 함수
	 전체 곡 정보를 출력하고 플레이리스트에 추가할 곡을 입력받고
	플레이리스트에 곡을 추가할 때마다 현재 플레이리스트를 출력하는 함수
*/
void print(Song list[], int size)
{
	Song playlist[5] = { 0 }; // Song 구조체 배열(플레이리스트)을 선언 및 초기화 
	int timeTotal = 0; // 총 재생 시간을 저장할 변수
	int index = 0; // 곡 번호를 저장할 변수

	// 곡 목록 헤더
	printf("	제목	아티스트	장르	재생시간\n");

	// 전체 곡 목록을 for문으로 출력
	for (int i = 0; i < size; i++)
	{
		// 순서대로, 곡 번호, 곡 제목, 아티스트명, 장르명, 재생시간 출력
		printf("%d. %s	%s	%s	%d초\n", 
			i + 1, list[i].name, list[i].artist, list[i].genre, list[i].time);
	}

	// 플레이리스트에 곡을 추가하는 반복문
	for (int i = 0; i < 5; i++)
	{
		// 곡 번호를 입력받음
		printf("플레이리스트에 추가할 곡 번호? ");
		scanf("%d", &index);

		/*
			if문으로 입력된 곡 번호가 1부터 size(현재 7)까지에 있는지 확인한다.
			해당 if문은 1부터 size 사이에 있지 않은 경우이다.

			잘못된 곡 번호임을 출력한 뒤 반복변수를 줄이고(다시 실행하기 위함)
			continue 키워드로 다음 반복으로 넘어가지 않고 현재 반복의 시작으로 돌아간다.
		*/
		if (index < 1 || index > size)
		{
			
			printf("잘못된 곡 번호입니다.\n");
			i--;
			continue;
		}
	
		/*
			입력한 곡 번호가 1부터 size(현재 7)까지에 있는 경우.
			배열 인덱스는 0부터 시작하므로 (입력한 곡 번호 - 1)을 한다.
		*/
		playlist[i] = list[index - 1];
		timeTotal += list[index - 1].time; // 총 재생 시간에 현재 추가된 곡 재생 시간 추가

		// 플레이리스트 출력하기
		printf("<< 플레이리스트 >>\n");
		for (int a = 0; a <= i; a++)
		{
			// 순서대로 곡 번호, 곡명, 아티스트명, 장르명, 재생시간 출력
			printf("%d.	%s	%s	%d초\n",
				a + 1, playlist[a].name, playlist[a].artist, 
				playlist[a].genre, playlist[a].time);
		}

		// 현재 플레이리스트의 총 재생 시간 출력
		printf("총 재생시간 : %d초\n", timeTotal);
	}
}