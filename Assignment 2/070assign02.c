/* 파일명: 070assign02.c
   * 내용: 02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오.
		학생의 번호는 정수로, 학점은 실수로 입력받는다.
   * 작성자: 강기민
   * 날짜: 2025.3.20
   */


#define _CRT_SECURE_NO_WARNINGS

//입출력 라이브러리
#include <stdio.h>

//점수과 학번을 입력받을 함수 선언
void score(void);

int main()
{
	score();
	return 0;

}

void score()
{
	//번호와 학점을 저장할 변수 선언
	int num;
	float gra;

	//번호와 학점을 각각 입력받음
	printf("번호? ");
	scanf("%d", &num);

	printf("학점? ");
	scanf("%f", &gra);

	//입력받은 값을 출력
	printf("%d번 학생의 학점은 %f입니다.", num, gra);
}
