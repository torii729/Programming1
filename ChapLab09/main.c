/*
	�����ڷ� ���鼭 ������ �� �����
	���� �˰� �ִ��� Ȯ���غ����Ѵٰ�...... �϶��......
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
	
	char* temp = NULL;
	// void * malloc(int size); �����͸� ��ȯ�ϴ� �Լ��� size�� �ָ� ���ӵ� �޸𸮸� �Ҵ��ؼ� �����ּҸ� ��ȯ�ϰ� ...
	temp = (char*)malloc(sizeof(char) * size);
	// ���� �� ��ȯ�� ���� ���̰�, ������ �迭�� ���鶧 ����. char temp[size]; �̷��� ������ ���� ����,

	if (temp == NULL)
	{
		return 0;
	}

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

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

