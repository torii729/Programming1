/* 파일명: 124assign01.c
   * 내용: 01. 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를
   *	구하는 프로그램을 작성하시오.
   * 날짜: 2025.4.4
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//사용할 함수 선언
void nemo(void);

int main()
{
    nemo();
    return 0;
}

void nemo(void) {
    //변수 선언 및 초기화(한 변의 길이, 넓이, 둘레)
    int s = 0;
    int a = 0;
    int p = 0;

    //한 변의 길이 입력받기
    printf("한 변의 길이? ");
    scanf("%d", &s);

    a = s * s; //정사각형의 넓이 = 한 변의 길이 * 한 변의 길이
    p = 4 * s; //정사각형의 둘레 = 한 변의 길이 * 4

    printf("정사각형의 넓이: %d\n", a);
    printf("정사각형의 둘레: %d\n", p);

    return 0;
}