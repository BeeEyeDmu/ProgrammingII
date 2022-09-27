#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력: ");
	scanf_s("%d", &n);

	// n의 약수를 모두 출력하세요

	// 1에서 n까지 변화하면서 
	// n을 그 수로 나눈 나머지가 0이면 출력
	for (int i = 1; i <= n; i++)
		if (n%i == 0)
			printf("%d ", i);
	printf("\n");
}