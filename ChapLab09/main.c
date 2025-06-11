/*
	기말고사때 나올 것 같은 부분은
	1. 문자열, 배열, 구조체, 포인터에 대한 개념과 예제를 이용한 객관식 문제
	2. 함수 원형 작성(배열이나 구조체나 포인터를 이용한...)
	3. 문자열 처리 목적에 맞는 함수명(strtok, strcat, strcpy, strlen 등)
	4. 두 구조체 변수를 비교하는 방법(구조체의 멤버를 하나씩 비교하는 방법)
		- 구조체의 멤버가 배열인 경우는 어떻게 비교할까? -> strcmp 함수를 이용해서 비교한다.
		- 구조체의 멤버가 포인터인 경우는 어떻게 비교할까? -> 포인터가 가리키는 주소값을 비교한다.
	5. 두 배열의 복사하는 방법(for문, 손코딩할 줄 알아야 함)

	강의자료와 교재를 보면서 예제는 꼭 적어보고 내가 알고 있는지 확인해 봐야 된다.

	===================================================================

	배열 : 같은 타입의 데이터를 연속적으로 저장하는 자료구조
	구조체 : 서로 다른 타입의 데이터를 묶어서 하나의 데이터로 표현하는 자료구조
	문자열	: 문자(char)형 데이터를 연속적으로 저장하는 자료구조, 마지막에 NULL 문자('\0')가 붙는다.
	
	비트필드 : 구조체에서 정수형 데이터를 비트 단위로 나누어 사용할 수 있는 기능

	====================================================================

	malloc 함수 : 메모리를 동적으로 할당하여 반환하는 함수
	(데이터타입*) malloc(sizeof(데이터타입) * 할당크기); 형식

	temp = (char*)malloc(sizeof(char) * size); 

	할당 메모리는 free(temp)를 통해 반드시 메모리 해제를 해야 한다.

	===================================================================
	
	static : 정적 변수, 자동으로 0으로 초기화하는 변수, 지역 전역 다 됨
	stack : 데이터를 쌓아 올리는 자료구조
	heap : 프로그래머가 할당하는 자료구조

	---------------------------------- |
	데이터 영역 (전역변수, static 변수)|
	---------------------------------- |
	vvv 힙(heap) 영역				   |
	---------------------------------- |
	^^^ 스택(stack) 영역			   |
	---------------------------------- |

	===================================================================

	포인터 : 메모리의 주소값을 저장하는 변수.
	주소 연산자(&) : 변수의 주소를 반환하는 연산자.
	참조 연산자(*) : 포인터가 가리키는 주소의 값을 반환하는 연산자.
	
	초기화 : 타입* 포인터이름 = &변수이름;, 타입* 포인터이름 = 주소값;
	예제 : int x = 10; // 변수의 선언
		int* ptr = &x; // 포인터의 선언
		int* pptr = &ptr; // 포인터의 참조
	
	===================================================================

	f로 시작하는 함수(fgets, fscanf 등) : 파일 입출력 함수, 
						stdin을 사용하여 표준 입력(키보드)으로부터 데이터를 읽어오는 함수들
	
	_s로 끝나는 함수(strcpy_s, strcat_s 등) : 보안 강화 함수

	strtok 함수 : 문자열을 원하는 대로 "자를 때" 쓰는 함수
	strcat 함수 : 문자열을 "연결"하는 함수
	strlen 함수 : 문자열의 "길이를 반환"하는 함수
	strcpy 함수 : 문자열을 "복사"하는 함수 (strcpy(a1, a2)처럼 사용)
	-> strncpy 함수 : 문자열을 "지정한 길이만큼" 복사하는 함수 (strncpy(a1, a2, n)처럼 사용)
	n이 붙는 이유 : n은 복사할 길이를 지정하기 때문.

	puts 함수 : str과 줄바꿈 문자를 "출력하는" 함수
	gets 함수 : str을 "입력받는" 함수

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int testStrlen();
int testStrcpy();
int test_string();
int str_swap(char* str1, char* str2, int size);

int main()
{
	// testStrlen();
	// testStrcpy();
	// str_swap();
	
	test_string();

	return 0;
}

#define SIZE 128
int test_string()
{
	char in_str[SIZE] = "";
	char out_str[SIZE] = "";

	char* pContext = NULL;

	printf("Enter a string : ");
	// gets_s(in_str, sizeof(in_str)); // (배열명, sizeof(배열명))이 안전~ 안전~
	// fgets(in_str, sizeof(in_str), stdin); // stdin이란 표준 입력(키보드)을 의미하는 스트림
	
	/*
		파일 경로 복사한 것을 이용하여 파일 여는 방법 :
			FILE* mycontact = fopen("C:\Users\user\Downloads\mycontact.txt", "r")
		비주얼 스튜디오의 헤더 파일 생성 -> 내가 쓸 파일 내용 복붙하면 끝
		
		*/ 

	FILE* mycontact = fopen("mycontact.txt", "r");

	if (mycontact == NULL)
	{
		printf("Fail to open file\n");
		return -1;
	}

	// 반복문으로 파일 정보 다 읽을 수 있게 
	while (fgets(in_str, sizeof(in_str), mycontact) != NULL)
	{
		puts(in_str);

		char* pToken = strtok_s(in_str, "| ", &pContext);
		if (pToken != NULL) puts(pToken);

		pToken = strtok_s(NULL, "| ", &pContext);
		if (pToken != NULL) puts(pToken);

		pToken = strtok_s(NULL, "| ", &pContext);
		if (pToken != NULL) puts(pToken);
	}

	fclose(mycontact);
	return 0;
}

#define STR_SIZE 10
int testStrcpy()
{
	char str1[STR_SIZE] = "";
	char str2[STR_SIZE] = "";

	printf("두 문자열을 입력 : ");
	scanf_s("%s %s", str1, STR_SIZE, str2, STR_SIZE);
	printf("%s %s (이)가 입력되었다\n", str1, str2);

	str_swap(str1, str2, STR_SIZE);
	printf("%s %s (이)가 교환이 되었는가?\n", str1, str2);

	return 0;
}


/*
	두 문자열을 교환하는 함수
	str1, str2는 서로 내용을 교환하고 싶은 문자열 포인터
	size 문자열 복사에 사용할 최대 길이

	temp 변수 선언을 하는 이유는 임시 저장용
*/
int str_swap(char * str1, char * str2, int size)
{
	int result = 0;
	if (size <= 0 || str1 == NULL || str2 == NULL)
	{
		return 0;
	}

	// 동적 메모리 할당을 위한 포인터 변수 선언
	// str1, str2를 교환하기 위해서 임시 저장할 변수이기도 하다.
	char* temp = NULL;

	// void * malloc(int size);
	// 포인터를 반환하는 함수고 size를 주면 연속된 메모리를 할당해서 시작주소를 반환하고 ...

	temp = (char*)malloc(sizeof(char) * size);
	// 강제 형 변환을 적은 것이고, 동적인 배열을 만들때 쓴다. 
	// char temp[size]; 이렇게 선언할 수는 없음.
	// temp[0] = 'A';


	if (temp == NULL)
	{
		return 0;
	}

	/*
	strncpy(temp, str1, size);
	strncpy(str1, str2, size);
	strncpy(str2, temp, size);
	*/

	strcpy_s(temp, size, str1); // temp <- str1 복사
	strcpy_s(str1, size, str2); // str1 <- str2 복사
	strcpy_s(str2, size, temp); // str2 <- temp 복사

	result = strlen(str1) + strlen(str2);

	free(temp);

	printf("str1 = %s, str2 = %s\n", str1, str2);

	return result;
}

int testStrlen()
{
	char str1[] = "hello";
	char name[] = "강기민";

	size_t len = strlen(str1);
	// len = strlen("");인 경우는 0이다.
	
	// printf("%s의 길이 : %d\n", str1, strlen(str1));
	printf("%s의 길이 : %d\n", str1, len);

	printf("%s의 길이 : %d", name, strlen(name));

	return 0;
}