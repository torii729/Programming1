/* ���ϸ�: 320assign09.c
   * ����: 09. red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����Ͻÿ�.
   *	�տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.10
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

	printf("RGB ����? ");
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