#include <stdio.h>

int main()
{
	int n;
	int a[100];

	printf("입력할 숫자의 개수 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cnt++;

	printf("짝수의 개수 = %d\n", cnt);

}