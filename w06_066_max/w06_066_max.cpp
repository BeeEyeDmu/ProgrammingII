#include <stdio.h>

int main()
{
	int n;
	int a[100];

	printf("입력할 숫자의 개수: ");
	scanf_s("%d", &n);

	printf("%d개의 숫자 입력 : ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}

	// 최대값을 찾는 문제
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];

	printf("최대값 = %d\n", max);

	// 최소값을 찾는 문제
	int min = a[0];
	for (int i = 1; i < n; i++)
		if (min > a[i])
			min = a[i];

	printf("최소값 = %d\n", min);

	// 하나의 반복문에서 처리
	int mmin = a[0];
	int mmax = a[0];
	for (int i = 1; i < n; i++)
		if (mmin > a[i])
			mmin = a[i];
		else if (mmax < a[i])
			mmax = a[i];

	printf("최대값 = %d, 최소값 = %d\n",
		mmax, mmin);
}