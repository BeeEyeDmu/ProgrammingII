#include <stdio.h>

// 106 = 110 1010
//  83 = 101 0011
int main()
{
	int a = 106;
	int b = 83;

	printf("a & b = %d, %x\n", a & b, a & b);
	printf("a | b = %d, %x\n", a | b, a | b);
	printf("a ^ b = %d, %x\n", a ^ b, a ^ b);
	printf("~a = %d, %x\n", ~a, ~a);
	a = a >> 3;
	printf("a >> 3 = %d, %x\n", a, a);
	a = 106;
	a = a << 3;
	printf("a << 3 = %d, %x\n", a, a);
}