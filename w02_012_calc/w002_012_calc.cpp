#include <stdio.h>

int main()
{
	int a = 5;
	int b;
	b = 3;

	int add, sub, mul, div, mod;
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;

	printf("%d + %d = %d\n", a, b, add);
	printf("%d - %d = %d\n", a, b, sub);
	printf("%d * %d = %d\n", a, b, mul);
	printf("%d / %d = %d\n", a, b, div);
	printf("%d %% %d = %d\n", a, b, mod); // 나머지

}