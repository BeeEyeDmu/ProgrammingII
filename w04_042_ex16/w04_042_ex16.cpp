#include <stdio.h>

int main()
{
	float f;
	float c;

	printf(" 화씨\t 섭씨\n");
	printf("=============\n");

	f = 10;
	while (f <= 100) {
		c = 5.0 / 9 * (f - 32);
		printf("%5.1f \t %5.1f\n", f, c);
		f += 10;
	}

}