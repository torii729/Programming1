/* ���ϸ�: 124assign04.c
   * ����: 04. ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾�
   *	�� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
   *	���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.
   * �ۼ���: �����
   * ��¥: 2025.4.4
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
    
    //���� ���� �� �ʱ�ȭ(��, �̵��Ÿ�, ���� ��)
    float f = 0;
    float d = 0;
    float w = 0;

    printf("��(N)? ");
    scanf("%f", &f);

    printf("�̵��Ÿ�(m)? ");
    scanf("%f", &d);

    w = f * d; // ���� �� = ���� ũ�� * �̵��� �Ÿ�

    printf("���� ��: %.2f J\n", w);

    return 0;
}