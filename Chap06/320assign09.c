/* 파일명: 320assign09.c
   * 내용: 09. red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하시오.
   *	앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.10
   */

/*
	핵심 문제는
	red, green, blue를 인자로 전달해서 RGB 색을 만드는 것(아직 비트 연산에 대한 이해가 부족함).

	RGB 색상은 하나의 16진수 정수로 표현되는 경우가 보통이다.
	0xFF0080일때, R: FF / G: 00 / B: 80이다.
	이진수로 나타내면 총 24비트이다.
	즉 red, green, blue는 비트 위치가 각각 16~23, 8~15, 0~7이다.

	red, green, blue의 각자의 비트 위치까지 값을 쉬프트로 밀어내야
	RGB 색상을 만들 수 있다고 생각하면 이해하기 쉬울 것 같다.
	즉 red는 <<16, green은 <<8, blue는 이미 0~7 자리이므로 쉬프트가 필요없는 것.

	그리고 &0xFF를 통하여 원하는 값만 얻을 수 있다.
	(& 연산자가 공통된 비트만 가져오다보니 나머지를 버릴 수 있다)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input_rgb(void);

int make_rgb(int red, int green, int blue);
int get_red(int rgb);
int get_green(int rgb);
int get_blue(int rgb);

void print(int rgb);


int main(void)
{
	int rgb = input_rgb();

	print(rgb);
	return 0;
}

int input_rgb(void)
{
	int rgb = 0;

	printf("RGB 색상? ");
	scanf("%x", &rgb);

	return rgb;
}

void print(int rgb)
{
	int r = get_red(rgb);
	int g = get_green(rgb);
	int b = get_blue(rgb);

	int re_r = (~r) & 0xFF;
	int re_g = (~g) & 0xFF;
	int re_b = (~b) & 0xFF;

	int re_rgb = make_rgb(re_r, re_g, re_b);

	printf("RGB %06X의 보색: %06X", rgb, re_rgb);
}

/*
	make_rgb는 rgb를 만드는 과정이므로 쉬프트 방향이 << 이어야 하지만
	get_red, get_green, get_blue는 값을 추출하는 과정이므로 쉬프트 방향이 오히려 >>인 점.
*/

int make_rgb(int red, int green, int blue)
{
	return (red << 16) | (green << 8) | blue;
}

int get_red(int rgb)
{
	return ((rgb >> 16) & 0xFF);
}

int get_green(int rgb)
{	
	return ((rgb >> 8) & 0xFF);
}

int get_blue(int rgb)
{
	return (rgb & 0xFF);
}
