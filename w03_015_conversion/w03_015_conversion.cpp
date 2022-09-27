#include <stdio.h>

int main()
{
	int math = 90;
	int korean = 95;
	int english = 96;

	int sum = math + english + korean;
	//double avg = (double)sum / 3;
	double avg = sum / 3.0;

	printf("평균점수 : %f\n", avg);
}