#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력: ");
	scanf_s("%d", &n);

	int pow = 1;  // sum = 0;
	for (int i = 0; i < n; i++) // 2를 n번 곱한다
		pow *= 2;
	printf("2의 %d제곱은 %d\n", n, pow);
}