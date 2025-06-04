/*
	강의자료 보면서 예제는 꼭 적어보고
	내가 알고 있는지 확인해봐야한다고...... 하라고......
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int testStrlen();
int testStrcpy();
int str_swap(char* str1, char* str2, int size);

int main()
{
	// testStrlen();
	testStrcpy();
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
	
	char* temp = NULL;
	// void * malloc(int size); 포인터를 반환하는 함수고 size를 주면 연속된 메모리를 할당해서 시작주소를 반환하고 ...
	temp = (char*)malloc(sizeof(char) * size);
	// 강제 형 변환을 적은 것이고, 동적인 배열을 만들때 쓴다. char temp[size]; 이렇게 선언할 수는 없음,

	if (temp == NULL)
	{
		return 0;
	}

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

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

