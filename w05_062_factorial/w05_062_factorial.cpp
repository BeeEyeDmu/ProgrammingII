// 팩토리얼
#include <stdio.h>

int main()
{
	int n;
	int fact = 1;	// sum = 0

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		fact *= i;
		printf("%d! = %d\n", n, fact);
	}
}