#include <stdio.h>

int fact(int n);

int main()
{
	int n;

	printf("정수 입력: ");
	scanf_s("%d", &n);

	printf("%d! = %d\n", n, fact(n));
}

int fact(int n)
{
	if (n == 1)
		return 1;
	return n * fact(n - 1);
}
