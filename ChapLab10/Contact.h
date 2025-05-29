// #pragma once

#ifndef _CONTACT_H_12496769
#define _CONTACT_H_12496769

enum gender { MAN, WOMAN };
typedef enum gender EGender;

struct contact
{
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};

typedef struct contact Contact;

// �Լ��� ��� ���Ͽ� �̸� �����ص� ��
int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
int isEqualContactPtr(Contact* a, Contact* b);
void printContactPtr(Contact* ct);

#endif //_CONTACT_H_12496769