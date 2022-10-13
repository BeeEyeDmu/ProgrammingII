#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;

	printf("&a = %p\n", &a);
	printf("(&a) + 1 = %p\n", &a + 1);
	printf("(&a) + 2 = %p\n", &a + 2);

	printf("p = %p\n", p);
	printf("p + 1 = %p\n", p + 1);
	printf("p + 2 = %p\n", p + 2);
}