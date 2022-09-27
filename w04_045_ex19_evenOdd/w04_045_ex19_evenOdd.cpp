#include <stdio.h>

int main()
{
	int evenSum = 0; // 짝수 합
	int oddSum = 0;	// 홀수 합
	int n, i;

	printf("n 입력: ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		if (i % 2 == 0) // 짝수
			evenSum += i;
		else  // 홀수
			oddSum += i;
		i++;
	}
	printf("홀수의 합 = %d, 짝수의 합 = %d", 
		oddSum, evenSum);
}