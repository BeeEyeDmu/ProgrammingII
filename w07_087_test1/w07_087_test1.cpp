#include <stdio.h>

int main()
{
	int a[10];

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);		
	}

	int sum = 0;
	float ave = 0;
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < 10; i++) {
		sum += a[i];		
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	ave = sum / 10.0;
	printf("합계 %d, 평균 %.1f, 최댓값 %d, 최솟값 %d", sum, ave, max, min);
}