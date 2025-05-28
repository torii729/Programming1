/* 파일명: 127assign01ex.c
   * 내용: 01. 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을
   *	작성하시오. 질량은 kg단위, 속력은 m/s단위로 입력받는다.
   * 작성자: 강기민
   * 날짜: 2025.4.9
   */

   /*
   기본적인 알고리즘 :
	   질량, 속도를 입력받는다
	   계산을 시킨다
	   결과를 출력한다
   */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double MotionEnergy(); //함수의 프로토타입. 호출하기 전에 맛보기로 보여주는 것
int assign1(void);

int main(void) // (void)는 매개변수가 없다는 의미로 작성하는 것
{
	int r = assign1();
	return r;
}

/*
	함수명: assign1()
	기능(책임): 질량, 속력을 입력받음, 운동에너지를 계산하도록 함수호출, 그 결과를 콘솔에 출력
	입력: 없음
	반환: 정수이며 0이면 성공, 그외 값은 에러이다.
*/
int assign1(void)
{
	// 1. 질량과 속력을 입력받아 저장한다.

	double w = 0.0; // 질량(kg)
	double v = 0.0; // 속력(m/s)

	printf("질량(kg)과 속력(m/s)를 입력해주세요: ");
	scanf("%lf %lf", &w, &v);

	// 2. 운동에너지를 계산하도록 한다. (getMotionEnergy 함수를 호출한다)

	double result = MotionEnergy(w, v);

	// 3. 계산된 운동에너지 출력한다.

	printf("질량 = %.2f kg, 속력 = %.2f m/s의 운동에너지는 %.2f J입니다.", w, v, result);

	return 0;
}

/*
	함수명: getMotionEnergy()
	기능(책임): 질량, 속력 입력받아 운동에너지를 계산하여 반환
	입력: 질량(kg), 속력(m/s)
	반환: 운동에너지
*/
double MotionEnergy(double kg, double m)
{
	double energy = 0.0;

	//운동에너지 = 0.5 * 질량 * 속력 * 속력
	energy = 0.5 * kg * m * m;

	return energy;
}
