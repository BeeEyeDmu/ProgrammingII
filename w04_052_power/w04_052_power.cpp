#include <stdio.h>

// x의 y승
int main()
{
	int x, y;
	int pow = 1;

	printf("x, y을 입력: ");
	scanf_s("%d %d", &x, &y);

	// x를 y번 곱한다
	for (int i = 0; i < y; i++) {
		pow *= x;
		printf("%d ^ %d = %d\n", x, i + 1, pow);
	}

	printf("%d의 %d제곱은 %d\n", x, y, pow);
}