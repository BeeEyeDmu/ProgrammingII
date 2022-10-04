
// 29. 
// 10개의 숫자 입력받아 배열에 저장
// 가장 큰 값(max)과 가장 작은 값(min)을 찾기
// max, min 출력하기

#include <stdio.h>

int main()
{
	int a[10];
	int max, min;

	printf("10개 숫자 입력: ");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);

	min = max = a[0];
	for (int i = 1; i < 10; i++)
		if (min > a[i])
			min = a[i];
		else if (max < a[i])
			max = a[i];

	printf("max = %d, min = %d\n", max, min);
}