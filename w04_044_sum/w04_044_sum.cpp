#include <stdio.h>

// 1~n까지의 합
int main()
{
	int i, n, sum = 0;

	printf("n입력 : ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("sum = %d\n", sum);
}