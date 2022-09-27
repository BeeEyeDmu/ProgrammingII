#include <stdio.h>

int main()
{
	float weight, height, bmi;

	printf("키(cm)와 몸무게(kg)를 입력하세요 : ");
	scanf_s("%f %f", &height, &weight);
	height /= 100;	// height = height/100;

	bmi = weight / (height*height);	// 키는 단위가 m

	printf("몸무게\t: %5.1fkg\n", weight);
	printf("키\t: %5.1fcm\n", height*100);
	printf("BMI\t: %5.1f\n", bmi);
}