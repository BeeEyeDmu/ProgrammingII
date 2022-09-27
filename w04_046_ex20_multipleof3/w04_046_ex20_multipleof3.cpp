#include <stdio.h>

int main()
{
	int sum = 0;	// 초기화
	int n1, n2, n3;
	int i;

	printf("세 숫자를 입력 : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	i = n1;
	while (i <= n2) {
		if (i % n3 == 0)
			sum += i;
		i++;
	}
	printf("sum = %d\n", sum);
}