/*
	�����ڷ� ���鼭 ������ �� �����
	���� �˰� �ִ��� Ȯ���غ����Ѵٰ�...... �϶��......

	malloc �Լ��� stack, heap ������ ���Ͽ�
	�����Ϳ� ���Ͽ�
	puts �Լ��� ���Ͽ�
	strtok �Լ�
	fgets(gets, gets_s) �Լ�

	fopen_s? strtok_s?
	���� ���� �����ִ� �Լ�?

	// strtok �Լ� : ���ڿ��� ���ϴ� ��� �ڸ� �� ���� �Լ�
	// puts �Լ� : str�� �ٹٲ� ���ڸ� ����ϴ� �Լ�
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
	// gets_s(in_str, sizeof(in_str)); // (�迭��, sizeof(�迭��))�� ����~ ����~
	// fgets(in_str, sizeof(in_str), stdin); // stdin�̶� Ű���� ����?
	
	/*
		���� ��� ������ ���� �̿��Ͽ� ���� ���� ��� :
			FILE* mycontact = fopen("C:\Users\user\Downloads\mycontact.txt", "r")

		�׷��� ���־� ��Ʃ����� ��� ���Ͽ��� ���� �ۼ��� ������ �ҷ����� �ȴ�
	*/ 

	FILE* mycontact = fopen("mycontact.txt", "r");

	if (mycontact == NULL)
	{
		printf("Fail to open file\n");
		return -1;
	}

	// �ݺ������� ���� ���� �� ���� �� �ְ� 
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

	printf("�� ���ڿ��� �Է� : ");
	scanf_s("%s %s", str1, STR_SIZE, str2, STR_SIZE);
	printf("%s %s (��)�� �ԷµǾ���\n", str1, str2);

	str_swap(str1, str2, STR_SIZE);
	printf("%s %s (��)�� ��ȯ�� �Ǿ��°�?\n", str1, str2);

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
	// �����͸� ��ȯ�ϴ� �Լ��� size�� �ָ� ���ӵ� �޸𸮸� �Ҵ��ؼ� �����ּҸ� ��ȯ�ϰ� ...
	temp = (char*)malloc(sizeof(char) * size);
	// ���� �� ��ȯ�� ���� ���̰�, ������ �迭�� ���鶧 ����. char temp[size]; �̷��� ������ ���� ����,
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

	free(temp); // ��ȯ���� �����͸� ����!�ϴ� �Լ��ε� free() �Լ�

	printf("str1 = %s, str2 = %s\n", str1, str2);

	return result;
}

int testStrlen()
{
	char str1[] = "hello";
	char name[] = "�����";

	size_t len = strlen(str1);
	// len = strlen("");�� ���� 0�̴�.
	
	// printf("%s�� ���� : %d\n", str1, strlen(str1));
	printf("%s�� ���� : %d\n", str1, len);

	printf("%s�� ���� : %d", name, strlen(name));

	return 0;
}