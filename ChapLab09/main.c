/*
	�⸻��綧 ���� �� ���� �κ���
	1. ���ڿ�, �迭, ����ü, �����Ϳ� ���� ����� ������ �̿��� ������ ����
	2. �Լ� ���� �ۼ�(�迭�̳� ����ü�� �����͸� �̿���...)
	3. ���ڿ� ó�� ������ �´� �Լ���(strtok, strcat, strcpy, strlen ��)
	4. �� ����ü ������ ���ϴ� ���(����ü�� ����� �ϳ��� ���ϴ� ���)
		- ����ü�� ����� �迭�� ���� ��� ���ұ�? -> strcmp �Լ��� �̿��ؼ� ���Ѵ�.
		- ����ü�� ����� �������� ���� ��� ���ұ�? -> �����Ͱ� ����Ű�� �ּҰ��� ���Ѵ�.
	5. �� �迭�� �����ϴ� ���(for��, ���ڵ��� �� �˾ƾ� ��)

	�����ڷ�� ���縦 ���鼭 ������ �� ����� ���� �˰� �ִ��� Ȯ���� ���� �ȴ�.

	===================================================================

	�迭 : ���� Ÿ���� �����͸� ���������� �����ϴ� �ڷᱸ��
	����ü : ���� �ٸ� Ÿ���� �����͸� ��� �ϳ��� �����ͷ� ǥ���ϴ� �ڷᱸ��
	���ڿ�	: ����(char)�� �����͸� ���������� �����ϴ� �ڷᱸ��, �������� NULL ����('\0')�� �ٴ´�.
	
	��Ʈ�ʵ� : ����ü���� ������ �����͸� ��Ʈ ������ ������ ����� �� �ִ� ���

	====================================================================

	malloc �Լ� : �޸𸮸� �������� �Ҵ��Ͽ� ��ȯ�ϴ� �Լ�
	(������Ÿ��*) malloc(sizeof(������Ÿ��) * �Ҵ�ũ��); ����

	temp = (char*)malloc(sizeof(char) * size); 

	�Ҵ� �޸𸮴� free(temp)�� ���� �ݵ�� �޸� ������ �ؾ� �Ѵ�.

	===================================================================
	
	static : ���� ����, �ڵ����� 0���� �ʱ�ȭ�ϴ� ����, ���� ���� �� ��
	stack : �����͸� �׾� �ø��� �ڷᱸ��
	heap : ���α׷��Ӱ� �Ҵ��ϴ� �ڷᱸ��

	---------------------------------- |
	������ ���� (��������, static ����)|
	---------------------------------- |
	vvv ��(heap) ����				   |
	---------------------------------- |
	^^^ ����(stack) ����			   |
	---------------------------------- |

	===================================================================

	������ : �޸��� �ּҰ��� �����ϴ� ����.
	�ּ� ������(&) : ������ �ּҸ� ��ȯ�ϴ� ������.
	���� ������(*) : �����Ͱ� ����Ű�� �ּ��� ���� ��ȯ�ϴ� ������.
	
	�ʱ�ȭ : Ÿ��* �������̸� = &�����̸�;, Ÿ��* �������̸� = �ּҰ�;
	���� : int x = 10; // ������ ����
		int* ptr = &x; // �������� ����
		int* pptr = &ptr; // �������� ����
	
	===================================================================

	f�� �����ϴ� �Լ�(fgets, fscanf ��) : ���� ����� �Լ�, 
						stdin�� ����Ͽ� ǥ�� �Է�(Ű����)���κ��� �����͸� �о���� �Լ���
	
	_s�� ������ �Լ�(strcpy_s, strcat_s ��) : ���� ��ȭ �Լ�

	strtok �Լ� : ���ڿ��� ���ϴ� ��� "�ڸ� ��" ���� �Լ�
	strcat �Լ� : ���ڿ��� "����"�ϴ� �Լ�
	strlen �Լ� : ���ڿ��� "���̸� ��ȯ"�ϴ� �Լ�
	strcpy �Լ� : ���ڿ��� "����"�ϴ� �Լ� (strcpy(a1, a2)ó�� ���)
	-> strncpy �Լ� : ���ڿ��� "������ ���̸�ŭ" �����ϴ� �Լ� (strncpy(a1, a2, n)ó�� ���)
	n�� �ٴ� ���� : n�� ������ ���̸� �����ϱ� ����.

	puts �Լ� : str�� �ٹٲ� ���ڸ� "����ϴ�" �Լ�
	gets �Լ� : str�� "�Է¹޴�" �Լ�

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
	// fgets(in_str, sizeof(in_str), stdin); // stdin�̶� ǥ�� �Է�(Ű����)�� �ǹ��ϴ� ��Ʈ��
	
	/*
		���� ��� ������ ���� �̿��Ͽ� ���� ���� ��� :
			FILE* mycontact = fopen("C:\Users\user\Downloads\mycontact.txt", "r")
		���־� ��Ʃ����� ��� ���� ���� -> ���� �� ���� ���� �����ϸ� ��
		
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


/*
	�� ���ڿ��� ��ȯ�ϴ� �Լ�
	str1, str2�� ���� ������ ��ȯ�ϰ� ���� ���ڿ� ������
	size ���ڿ� ���翡 ����� �ִ� ����

	temp ���� ������ �ϴ� ������ �ӽ� �����
*/
int str_swap(char * str1, char * str2, int size)
{
	int result = 0;
	if (size <= 0 || str1 == NULL || str2 == NULL)
	{
		return 0;
	}

	// ���� �޸� �Ҵ��� ���� ������ ���� ����
	// str1, str2�� ��ȯ�ϱ� ���ؼ� �ӽ� ������ �����̱⵵ �ϴ�.
	char* temp = NULL;

	// void * malloc(int size);
	// �����͸� ��ȯ�ϴ� �Լ��� size�� �ָ� ���ӵ� �޸𸮸� �Ҵ��ؼ� �����ּҸ� ��ȯ�ϰ� ...

	temp = (char*)malloc(sizeof(char) * size);
	// ���� �� ��ȯ�� ���� ���̰�, ������ �迭�� ���鶧 ����. 
	// char temp[size]; �̷��� ������ ���� ����.
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

	strcpy_s(temp, size, str1); // temp <- str1 ����
	strcpy_s(str1, size, str2); // str1 <- str2 ����
	strcpy_s(str2, size, temp); // str2 <- temp ����

	result = strlen(str1) + strlen(str2);

	free(temp);

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