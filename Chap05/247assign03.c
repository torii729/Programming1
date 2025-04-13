/* 파일명: 247assign03.c
   * 내용: 03. 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇 개 필요한지 구해서
   *        입력하시오. 십원 미만 단위는 절사한다.
   * 작성자: 강기민
   * 날짜: 2025.4.24
   */

#include <stdio.h>

int inputMoney(void);
void calculateChange(int money);

// 변수를 초기화하고 함수를 호출하는 역할
int main()
{
    int money = inputMoney();
    calculateChange(money);
    return 0;
}

/*
    거스름돈을 입력받고 10원 단위로 절사하는 역할
    10원 단위 절사라는 것은 거스름돈의 일의 자리 수가 0이기만 하면 되므로
    10으로 나누고 다시 10 곱하면 일의 자리 수가 0인 점을 이용하여 절사 식을 작성함.
*/ 
int inputMoney(void)
{
    int money;
    printf("거스름돈? ");
    scanf_s("%d", &money);
    return (money / 10) * 10; // 10원 단위 절사
}

// 절사까지 한 거스름돈을 지폐로 몇 장 내면 되는건지 계산하는 역할 
void calculateChange(int money)
{
    if (money >= 50000) {
        printf("50000원: %d장\n", money / 50000);
        money %= 50000;
    }

    if (money >= 10000) {
        printf("10000원: %d장\n", money / 10000);
        money %= 10000;
    }

    if (money >= 5000) {
        printf("5000원: %d장\n", money / 5000);
        money %= 5000;
    }

    if (money >= 1000) {
        printf("1000원: %d장\n", money / 1000);
        money %= 1000;
    }

    if (money >= 100) {
        printf("100원: %d개\n", money / 100);
        money %= 100;
    }

    if (money >= 10) {
        printf("10원: %d개\n", money / 10);
    }
}