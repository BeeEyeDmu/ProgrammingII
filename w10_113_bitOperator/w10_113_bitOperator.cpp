#include <stdio.h>

int main()
{
	// 논리연산자, 비트연산자
	printf("3 && 4 = %d\n", 3 && 4);
	printf("3 & 4 = %d\n", 3 & 4);

	printf("3 || 4 = %d\n", 3 || 4);
	printf("3 | 4 = %d\n", 3 | 4);

	printf("3 ^ 4 = %d\n", 3 ^ 4);

	printf("!3 = %d\n", !3);
	printf("~3 = %d\n", ~3);

	// 마스크(LSB에서 3번째 비트를 마스크로)
	int x;

	scanf_s("%d", &x);
	if (x & 0x0004 == 1)
		printf("에어컨을 켠다\n");
	else
		printf("에어컨을 끈다\n");

}