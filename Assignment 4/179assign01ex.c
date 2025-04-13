/* ���ϸ�: 127assign01ex.c
   * ����: 01. ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷���
   *	�ۼ��Ͻÿ�. ������ kg����, �ӷ��� m/s������ �Է¹޴´�.
   * �ۼ���: �����
   * ��¥: 2025.4.9
   */

   /*
   �⺻���� �˰��� :
	   ����, �ӵ��� �Է¹޴´�
	   ����� ��Ų��
	   ����� ����Ѵ�
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double MotionEnergy(); //�Լ��� ������Ÿ��. ȣ���ϱ� ���� ������� �����ִ� ��
int assign1(void);

int main(void) // (void)�� �Ű������� ���ٴ� �ǹ̷� �ۼ��ϴ� ��
{
	int r = assign1();
	return r;
}

/*
	�Լ���: assign1()
	���(å��): ����, �ӷ��� �Է¹���, ��������� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
	�Է�: ����
	��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
*/
int assign1(void)
{
	// 1. ������ �ӷ��� �Է¹޾� �����Ѵ�.

	double w = 0.0; // ����(kg)
	double v = 0.0; // �ӷ�(m/s)

	printf("����(kg)�� �ӷ�(m/s)�� �Է����ּ���: ");
	scanf("%lf %lf", &w, &v);

	// 2. ��������� ����ϵ��� �Ѵ�. (getMotionEnergy �Լ��� ȣ���Ѵ�)

	double result = MotionEnergy(w, v);

	// 3. ���� ������� ����Ѵ�.

	printf("���� = %.2f kg, �ӷ� = %.2f m/s�� ��������� %.2f J�Դϴ�.", w, v, result);

	return 0;
}

/*
	�Լ���: getMotionEnergy()
	���(å��): ����, �ӷ� �Է¹޾� ��������� ����Ͽ� ��ȯ
	�Է�: ����(kg), �ӷ�(m/s)
	��ȯ: �������
*/
double MotionEnergy(double kg, double m)
{
	double energy = 0.0;

	//������� = 0.5 * ���� * �ӷ� * �ӷ�
	energy = 0.5 * kg * m * m;

	return energy;
}