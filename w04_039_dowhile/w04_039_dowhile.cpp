#include <stdio.h>

int main()
{
	int n;

	printf("숫자 입력(0은 종료): ");
	scanf_s("%d", &n);

	while (n != 0) {
		printf("%d 입력\n", n);
		printf("숫자 입력(0은 종료): ");
		scanf_s("%d", &n);
	}
	//do {
	//	printf("숫자 입력(0은 종료): ");
	//	scanf_s("%d", &n);
	//	printf("%d 입력\n", n);
	//} while (n != 0);
}