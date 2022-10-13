// 포인터의 배열
#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int *p[3];
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	printf("%d %d %d\n", a, b, c);
	printf("%d %d %d\n", *p[0], *p[1], *p[2]);

	for (int i = 0; i < 3; i++)
		printf("%d ", *p[i]);
	printf("\n");
}