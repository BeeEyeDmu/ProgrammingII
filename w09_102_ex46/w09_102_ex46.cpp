// ex46. 팩토리얼
#include <stdio.h>

int fact(int n) 
{
	if (n == 1)
		return 1;
	return n*fact(n - 1);
}

int main()
{
	int n;
	int f = 1;

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		f *= i;

	printf("반복문 f = %d\n", f);

	// 재귀함수
	printf("재귀함수 f = %d\n", fact(n));
}