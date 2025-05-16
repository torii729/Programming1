/* ���ϸ�: 320assign09.c
   * ����: 09. red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb �Լ��� �����Ͻÿ�.
   *	�տ��� ������ get_red, get_green, get_blue �Լ��� �Բ� �̿��ؼ� �Է¹��� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.10
   */

/*
	�ٽ� ������
	red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� ��(���� ��Ʈ ���꿡 ���� ���ذ� ������).

	RGB ������ �ϳ��� 16���� ������ ǥ���Ǵ� ��찡 �����̴�.
	0xFF0080�϶�, R: FF / G: 00 / B: 80�̴�.
	�������� ��Ÿ���� �� 24��Ʈ�̴�.
	�� red, green, blue�� ��Ʈ ��ġ�� ���� 16~23, 8~15, 0~7�̴�.

	red, green, blue�� ������ ��Ʈ ��ġ���� ���� ����Ʈ�� �о��
	RGB ������ ���� �� �ִٰ� �����ϸ� �����ϱ� ���� �� ����.
	�� red�� <<16, green�� <<8, blue�� �̹� 0~7 �ڸ��̹Ƿ� ����Ʈ�� �ʿ���� ��.

	�׸��� &0xFF�� ���Ͽ� ���ϴ� ���� ���� �� �ִ�.
	(& �����ڰ� ����� ��Ʈ�� �������ٺ��� �������� ���� �� �ִ�)
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

	int re_r = (~r) & 0xFF;
	int re_g = (~g) & 0xFF;
	int re_b = (~b) & 0xFF;

	int re_rgb = make_rgb(re_r, re_g, re_b);

	printf("RGB %06X�� ����: %06X", rgb, re_rgb);
}

/*
	make_rgb�� rgb�� ����� �����̹Ƿ� ����Ʈ ������ << �̾�� ������
	get_red, get_green, get_blue�� ���� �����ϴ� �����̹Ƿ� ����Ʈ ������ ������ >>�� ��.
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