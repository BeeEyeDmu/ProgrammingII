#include <stdio.h>

int main() 
{
	int i = 1;
	int n;
	int sum = 0;	// 초기화 중요

	printf("n입력: ");
	scanf_s("%d", &n);

	while (i <= n) {
		sum += i;
		printf("%d : %d\n", i, sum);
		i++;
	}
	printf("sum = %d\n", sum);
}