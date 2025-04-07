/* 파일명: 124assign04.c
   * 내용: 04. 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아
   *	한 일의 양을 구하는 프로그램을 작성하시오.
   *	힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.
   * 작성자: 강기민
   * 날짜: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void him(void);

int main()
{
    him();
    return 0;
}

void him(void) {
    
    //변수 선언 및 초기화(힘, 이동거리, 일의 양)
    float f = 0;
    float d = 0;
    float w = 0;

    printf("힘(N)? ");
    scanf("%f", &f);

    printf("이동거리(m)? ");
    scanf("%f", &d);

    w = f * d; // 일의 양 = 힘의 크기 * 이동한 거리

    printf("일의 양: %.2f J\n", w);

    return 0;
}