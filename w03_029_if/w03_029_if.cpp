#include <stdio.h>

int main()
{
	int n;

	printf("숫자를 입력 : ");
	scanf_s("%d", &n);

	if (n % 2 == 0) {
		printf("%d = ", n);
		printf("짝수입니다\n");
	}
	else {
		printf("%d = ", n);
		printf("홀수입니다\n");
	}
		
}