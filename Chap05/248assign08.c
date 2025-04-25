/* ���ϸ�: 248assign08.c
   * ����: 08. ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�. &�� ��Ʈ AND, |�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ�.
   *		"0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�. ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������
   *		����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.4.24
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void scan(int* int1, int* int2, char* bit, int* end);
void cul(int int1, int int2, char bit, int end);

// ������ �ʱ�ȭ�ϰ� �Լ��� ȣ���ϴ� ����
int main()
{
	int int1 = 0;
	int int2 = 0;

	char bit = 0;

	int end = 0;
	
	scan(&int1, &int2, &bit, &end);
	cul(int1, int2, bit, end);

	return 0;
}

// ��Ʈ ������� �Է¹޴� �Լ�
void scan(int* int1, int* int2, char* bit, int* end)
{
	printf("��Ʈ �����? ");
	scanf("%x %c %x", int1, bit, int2);
}

// ���� bit�� ����� ���ڿ� ���� ����ϰ� ����� ����ϴ� ����
void cul(int int1, int int2, char bit, int end)
{
	if (bit == '&')
	{
		end = int1 & int2;
	}
	else if (bit == '|')
	{
		end = int1 | int2;
	}
	else if (bit == '^')
	{
		end = int1 ^ int2;
	}
	else
	{
		printf("�߸� �Է��߽��ϴ�");
	}

	printf("%08x %c %08x = %d", int1, bit, int2, end);
}