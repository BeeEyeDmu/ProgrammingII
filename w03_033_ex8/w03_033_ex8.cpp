// 산술연산자 사용하기
#include <stdio.h>

int main()
{
	float a = 9.8;
	float b = 3.14;

	printf("%.2f + %.2f = %6.2f\n", a, b, a + b);
	printf("%.2f - %.2f = %6.2f\n", a, b, a - b);
	printf("%.2f * %.2f = %6.2f\n", a, b, a * b);
	printf("%.2f / %.2f = %6.2f\n", a, b, a / b);
}