﻿#include <stdio.h>

int main()
{
	printf("이름    국어  영어  수학  합계  평균\n");
	printf("====================================\n");
	printf("홍길동 %5d  %4d  %4d  %4d  %.1f\n",
		100, 90, 80, 100 + 90 + 80, (100 + 90 + 80) / 3.0);
	printf("임꺽정 %5d  %4d  %4d  %4d  %.1f\n",
		90, 100, 100, 90 + 100 + 100, (90 + 100 + 100) / 3.0);
	printf("성춘향 %5d  %4d  %4d  %4d  %.1f\n",
		80, 90, 100, 80 + 90 + 100, (80 + 90 + 100) / 3.0);
	printf("====================================\n");
}