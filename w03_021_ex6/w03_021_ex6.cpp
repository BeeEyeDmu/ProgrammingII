#include <stdio.h>

int main()
{
	float f, c;

	printf(" 화씨 \t 섭씨\n");
	printf("=============\n");

	f = 100;
	c = 5 / 9.0*(f - 32);

	printf(" %5.1f \t %4.1f\n", f, c);

	f = 80;
	c = 5 / 9.0*(f - 32);

	printf(" %5.1f \t %4.1f\n", f, c);

	f = 60;
	c = 5 / 9.0*(f - 32);

	printf(" %5.1f \t %4.1f\n", f, c);

}