/* ���ϸ�: 370assign01.c
   * ����: 01. ���������� ���� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�. 
        ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�.
        ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
   * �ۼ���: �����
   * ��¥: 2025.5.21
   */

   
#define ARR_SIZE 10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fillCD(int arr[], int size, int start, int diff);
int Assign01();
void printArray(int arr[], int size);

// �Լ� ȣ��, Assign01 �Լ����� ���� ���� ��ȯ��
int main()
{
    return Assign01();
}

int Assign01()
{
    int result[10] = { 0 };
    int start = 0;
    int diff = 0;

    // �Է��ϱ�
    printf("�ʱⰪ ���� �Է��ϼ���: ");
    scanf("%d %d", &start, &diff);

    // ����ϱ�
    fillCD(result, ARR_SIZE, start, diff);

    // ����ϱ�
    printArray(result, ARR_SIZE);
    return 0;
}

// �Է¹��� �ʱⰪ(ù° ��)�� ������ �̿��Ͽ� ���������� ����ϴ� �Լ� 
void fillCD(int arr[], int size, int start, int diff)
{
    int i;

    arr[0] = start;

    for (i = 1; i < size; i++)
    {
        arr[i] = arr[i - 1] + diff;

    }
}

// �迭�� ������� ����ϴ� �Լ�
void printArray(int arr[], int size)
{
    int i = 0;

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}