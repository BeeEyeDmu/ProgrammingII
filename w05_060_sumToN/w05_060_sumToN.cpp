// 워크시트 25번
// 1부터 n까지의 합, 홀수 합, 짝수 합
#include <stdio.h>

int main()
{
	int n;
	int sum = 0, evenSum = 0, oddSum = 0;

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i % 2 == 0)
			evenSum += i;
		else
			oddSum += i;
	}

	printf("합 = %d\n짝수의 합 = %d\n홀수의 합 = %d\n",
		sum, evenSum, oddSum);

}