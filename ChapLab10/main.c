/*
   ���� ��¥ : 2025.05.28.
   ���� : ���� Chap10 ����. ����ü struct�� ���, ����ü ��, ��� ���� ���� �� �ҷ�����,
      typedef�� ���� ���� +����, ����ü enum�� ��� ��

   ! ���� �߻� �� ���� ù��° �������� �ذ��ϸ� �ȴ�(������ �������� �ذ����� ����...).
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
    Contact c1 = { "ȫ", "01012345678", MAN, 2025 };
    Contact c2 = { "��", "01009876543", WOMAN, 2025 };
    Contact c3 = { "��", "01009876543", WOMAN, 2025 };

    printContact(c1);
    // printContactPtr(&c2);

    int result1 = isEqualContact(c1, c2);
    // int result2 = isEqualContactPtr(&c2, &c3); // ������ �ּҸ� �Ѱ���� �Ѵ�(Contact.c�� �ش� �Լ� ����).

    // ���� �����ڸ� �̿��ϸ� if�� ���̵� �����ϰ� ����� �� �ִ�.
    printf("c1�� c2�� %s \n", result1 ? "�����ϴ�" : "�ٸ��ϴ�");
    // printf("c2�� c3�� %s \n", result2 ? "�����ϴ�" : "�ٸ��ϴ�");
}