/* 파일명: 320assign09.c
   * 내용: 09. red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb 함수를 정의하시오.
   *	앞에서 정의한 get_red, get_green, get_blue 함수를 함께 이용해서 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.
   * 작성자: 강기민
   * 날짜: 2025.5.10
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

	int re_r = ~r;
	int re_g = ~g;
	int re_b = ~b;

	int re_rgb = make_rgb(re_r, re_g, re_b);

}

int make_rgb(int red, int green, int blue)
{


}

int get_red(int rgb)
{


}

int get_green(int rgb)
{


}

int get_blue(int rgb)
{


}