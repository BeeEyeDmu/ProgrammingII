#include <stdio.h>

int main()
{
	int n; // 출력할 단수
	int i; // 반복변수, 1~9

	printf("출력할 단수: ");
	scanf_s("%d", &n);

	i = 1;
	while (i <= 9) {
		printf("%d x %d = %d\n", n, i, n*i);
		i++;
	}
}