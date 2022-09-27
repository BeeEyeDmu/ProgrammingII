#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int evenSum = 0;
	int oddSum = 0;
	int i;	// 반복변수

	printf("n : ");
	scanf_s("%d", &n);

	// 반복문: 초기, 끝, 변화
	i = 1;
	while (i <= n) {
		sum += i;
		if (i % 2 == 0)
			evenSum += i;
		else
			oddSum += i;
		i++;
	}
	printf("%d %d %d\n", sum, evenSum, oddSum);
}