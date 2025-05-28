/*
   강의 날짜 : 2025.05.28.
   내용 : 교재 Chap10 내용. 구조체 struct의 사용, 구조체 비교, 헤더 파일 생성 및 불러오기,
      typedef을 통한 별명 +짓기, 열거체 enum의 사용 등

   ! 에러 발생 시 제일 첫번째 에러부터 해결하면 된다(빨간색 에러부터 해결하지 말고...).
*/

#include <stdio.h>
#include "Contact.h"

void testContact();

int main()
{
    testContact();
    return 0;
}

void testContact()
{
    Contact c1 = { "홍", "01012345678", MAN, 2025 };
    Contact c2 = { "김", "01009876543", WOMAN, 2025 };
    Contact c3 = { "김", "01009876543", WOMAN, 2025 };

    printContact(c1);
    // printContactPtr(&c2);

    int result1 = isEqualContact(c1, c2);
    // int result2 = isEqualContactPtr(&c2, &c3); // 변수의 주소를 넘겨줘야 한다(Contact.c의 해당 함수 참고).

    // 삼항 연산자를 이용하면 if문 없이도 간결하게 출력할 수 있다.
    printf("c1과 c2는 %s \n", result1 ? "같습니다" : "다릅니다");
    // printf("c2와 c3는 %s \n", result2 ? "같습니다" : "다릅니다");
}