#include <stdio.h>
#include "Contact.h" // ���� ���� ��� ������ �ҷ��� ���� <>�� �ƴ϶� ""�� �ҷ��� ��
#include <string.h> // strcmp �Լ��� ����ϱ� ���� �ҷ��� ��� ����

/*
   isEqualContact() �Լ�
   ��ȯ�� : ����(if) ������ 1(true), ���� ������ 0(false)�� ��ȯ
   �Է� : ���� �� Contact ��

   name, phone, year, gender(��� ���� ����)�� ���ؾ� �Ѵ�.
   �� ���� ���ڿ��� ������ ���ϱ� ���ؼ� strcmp �Լ��� ����Ѵ�.
*/
int isEqualContact(Contact a, Contact b)
{
    // . ���
    if (a.year == b.year && a.gender == b.gender &&
        strcmp(a.name, b.name) == 0 && strcmp(a.phone, b.phone) == 0)
    {
        return 1; // ���̸� 1�� ��ȯ�Ѵ�.
    }

    return 0; // �����̸� 0�� ��ȯ
}

void printContact(Contact ct)
{
    // �̸� : ---
    // ���� : ---
    // ���� : --- (���� Ȥ�� ����)
    // ��¥(����) : ---

    printf("�̸� : %s \n", ct.name);
    printf("���� : %s \n", ct.phone);
    printf("���� : %s \n", ct.gender == MAN ? "����" : "����");
    printf("��¥(����) : %4d \n", ct.year);
}


//
// �� ���� �����ͺ��� ���, �����ϰ� const ������ �����Ѵ�.
//
/*

int isEqualContactPtr(const Contact* a, const Contact* b)
{
    // �����ͺ��� ���� ->
    if (a->year == b->year && a->gender == b->gender &&
        strcmp(a->name, b->name) == 0 && strcmp(a->phone, b->phone) == 0)
    {
        return 1; // ���̸� 1�� ��ȯ
    }

    return 0; // �����̸� 0�� ��ȯ
}

void printContactPtr(const Contact* ct)
{
    // �̸� : ---
    // ���� : ---
    // ���� : --- (���� Ȥ�� ����)
    // ��¥(����) : ---

    printf("�̸� : %s \n", ct->name);
    printf("���� : %s \n", ct->phone);
    printf("���� : %s \n", ct->gender == MAN ? "����" : "����");
    printf("��¥(����) : %4d \n", ct->year);
}

*/