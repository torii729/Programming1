#include <stdio.h>
#include "Contact.h" // 내가 만든 헤더 파일을 불러올 때는 <>가 아니라 ""로 불러올 것
#include <string.h> // strcmp 함수를 사용하기 위해 불러온 헤더 파일

/*
   isEqualContact() 함수
   반환값 : 만약(if) 같으면 1(true), 같지 않으면 0(false)을 반환
   입력 : 비교할 두 Contact 값

   name, phone, year, gender(헤더 파일 참고)를 비교해야 한다.
   두 개의 문자열이 같은지 비교하기 위해서 strcmp 함수를 사용한다.
*/
int isEqualContact(Contact a, Contact b)
{
    // . 사용
    if (a.year == b.year && a.gender == b.gender &&
        strcmp(a.name, b.name) == 0 && strcmp(a.phone, b.phone) == 0)
    {
        return 1; // 참이면 1을 반환한다.
    }

    return 0; // 거짓이면 0을 반환
}

void printContact(Contact ct)
{
    // 이름 : ---
    // 전번 : ---
    // 성별 : --- (남자 혹은 여자)
    // 날짜(연도) : ---

    printf("이름 : %s \n", ct.name);
    printf("전번 : %s \n", ct.phone);
    printf("성별 : %s \n", ct.gender == MAN ? "남자" : "여자");
    printf("날짜(연도) : %4d \n", ct.year);
}


//
// 이 밑은 포인터변수 사용, 안전하게 const 변수로 선언한다.
//
/*

int isEqualContactPtr(const Contact* a, const Contact* b)
{
    // 포인터변수 사용시 ->
    if (a->year == b->year && a->gender == b->gender &&
        strcmp(a->name, b->name) == 0 && strcmp(a->phone, b->phone) == 0)
    {
        return 1; // 참이면 1을 반환
    }

    return 0; // 거짓이면 0을 반환
}

void printContactPtr(const Contact* ct)
{
    // 이름 : ---
    // 전번 : ---
    // 성별 : --- (남자 혹은 여자)
    // 날짜(연도) : ---

    printf("이름 : %s \n", ct->name);
    printf("전번 : %s \n", ct->phone);
    printf("성별 : %s \n", ct->gender == MAN ? "남자" : "여자");
    printf("날짜(연도) : %4d \n", ct->year);
}

*/