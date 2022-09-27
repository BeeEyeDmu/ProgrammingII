#include <stdio.h>

int main()
{
	// *를 n개 출력하기
	// n은 입력받는다
	int i, n;

	printf("n을 입력 : ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= n) {
		printf("*");
		i++;
	}
}