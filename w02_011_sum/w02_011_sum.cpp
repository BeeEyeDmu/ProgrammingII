#include <stdio.h>
#include <limits.h>

int main()
{
	int a = 2;
	int b = 3;
	int 합 = a + b;

	printf("%d + %d = %d\n", a, b, 합);
	printf("INT_MAX = %d, INT_MIN = %d\n", 
		INT_MAX, INT_MIN);
}