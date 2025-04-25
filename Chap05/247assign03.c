/* ���ϸ�: 247assign03.c
   * ����: 03. �Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ�
   *        �Է��Ͻÿ�. �ʿ� �̸� ������ �����Ѵ�.
   * �ۼ���: �����
   * ��¥: 2025.4.24
   */

#include <stdio.h>

int inputMoney(void);
void calculateChange(int money);

// ������ �ʱ�ȭ�ϰ� �Լ��� ȣ���ϴ� ����
int main()
{
    int money = inputMoney();
    calculateChange(money);
    return 0;
}

/*
    �Ž������� �Է¹ް� 10�� ������ �����ϴ� ����
    10�� ���� ������ ���� �Ž������� ���� �ڸ� ���� 0�̱⸸ �ϸ� �ǹǷ�
    10���� ������ �ٽ� 10 ���ϸ� ���� �ڸ� ���� 0�� ���� �̿��Ͽ� ���� ���� �ۼ���.
*/ 
int inputMoney(void)
{
    int money;
    printf("�Ž�����? ");
    scanf_s("%d", &money);
    return (money / 10) * 10; // 10�� ���� ����
}

// ������� �� �Ž������� ����� �� �� ���� �Ǵ°��� ����ϴ� ���� 
void calculateChange(int money)
{
    if (money >= 50000) {
        printf("50000��: %d��\n", money / 50000);
        money %= 50000;
    }

    if (money >= 10000) {
        printf("10000��: %d��\n", money / 10000);
        money %= 10000;
    }

    if (money >= 5000) {
        printf("5000��: %d��\n", money / 5000);
        money %= 5000;
    }

    if (money >= 1000) {
        printf("1000��: %d��\n", money / 1000);
        money %= 1000;
    }

    if (money >= 100) {
        printf("100��: %d��\n", money / 100);
        money %= 100;
    }

    if (money >= 10) {
        printf("10��: %d��\n", money / 10);
    }
}