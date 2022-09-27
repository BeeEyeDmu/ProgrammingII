#include <stdio.h>

int main()
{
	int a = 5;
	int b;

	b = ++a;	// b = 6, a = 6
	printf("a=%d b=%d\n", a, b);
	b = a++;	// b = 6, a = 7
	printf("a=%d b=%d\n", a, b);
	a++;
	printf("a=%d b=%d\n", a, b);
	++a;
	printf("a=%d b=%d\n", a, b);
}