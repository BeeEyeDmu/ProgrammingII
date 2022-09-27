#include <stdio.h>

int main()
{
	float a = 9.8;
	float b = 3.14;
	float add = a + b;
	float sub = a - b;
	float mul = a * b;
	float div = a / b;
	//float mod = a % b;  float 는 % 연산이 불가능

	printf("%f + %f = %f\n", a, b, add);
	printf("%f - %f = %f\n", a, b, sub);
	printf("%f * %f = %f\n", a, b, mul);
	printf("%f / %f = %f\n", a, b, div);

}