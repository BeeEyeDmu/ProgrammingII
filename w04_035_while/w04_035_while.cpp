#include <stdio.h>

int main()
{
	// 1 ~ 10까지 숫자 출력
	int i = 2;

	while (i <= 100) {
		printf("%d ", i);
		i += 2;	// i = i + 2;
	}
	printf("\n");

	// 1~100 사이의 3의 배수를 출력하라
	i = 1;

	while (i <= 100) {
		if (i % 3 == 0)	// 3의 배수이면
			printf("%d ", i);
		i++;
	}
	printf("\n");
}