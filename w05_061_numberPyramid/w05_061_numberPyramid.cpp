// 워크시트 26번
// 숫자 피라미드
// 4 3 2 1
// 3 2 1
// 2 1
// 1

#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--)
			printf("%d ", j);
		printf("\n");
	}
}