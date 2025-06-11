/*
	강의자료 보면서 예제는 꼭 적어보고
	내가 알고 있는지 확인해봐야한다고...... 하라고......

	malloc 함수와 stack, heap 영역에 대하여
	포인터에 대하여
	puts 함수에 대하여
	strtok 함수
	fgets(gets, gets_s) 함수

	fopen_s? strtok_s?
	공백 문자 없애주는 함수?

	// strtok 함수 : 문자열을 원하는 대로 자를 때 쓰는 함수
	// puts 함수 : str과 줄바꿈 문자를 출력하는 함수
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
	// fgets(in_str, sizeof(in_str), stdin); // stdin이란 키보드 파일?
	
	/*
		파일 경로 복사한 것을 이용하여 파일 여는 방법 :
			FILE* mycontact = fopen("C:\Users\user\Downloads\mycontact.txt", "r")

		그러나 비주얼 스튜디오의 헤더 파일에다 내가 작성한 파일을 불러오면 된다
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

int str_swap(char * str1, char * str2, int size)
{
	int result = 0;
	if (size <= 0 || str1 == NULL || str2 == NULL)
	{
		return 0;
	}

	char* temp = NULL;
	// void * malloc(int size);
	// 포인터를 반환하는 함수고 size를 주면 연속된 메모리를 할당해서 시작주소를 반환하고 ...
	temp = (char*)malloc(sizeof(char) * size);
	// 강제 형 변환을 적은 것이고, 동적인 배열을 만들때 쓴다. char temp[size]; 이렇게 선언할 수는 없음,
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

	strcpy_s(temp, size, str1);
	strcpy_s(str1, size, str2);
	strcpy_s(str2, size, temp);

	result = strlen(str1) + strlen(str2);

	free(temp); // 반환받은 포인터를 해제!하는 함수인듯 free() 함수

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