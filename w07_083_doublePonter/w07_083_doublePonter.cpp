#include <stdio.h>

int main()
{
	int a = 10;
	int *p = &a;
	int **pp = &p;	// 이중포인터, 더블포인터

	printf("1. a = %d\n", a);
	printf("2. &a = %p\n", &a);
	printf("3. p = %p\n", p);
	printf("4. &p = %p\n", &p);
	printf("5. pp = %p\n", pp);
	printf("6. *pp = %p\n", *pp);
	printf("7. **pp = %d\n", **pp);
}