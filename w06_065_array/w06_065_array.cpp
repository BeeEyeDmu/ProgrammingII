#include <stdio.h>

int main()
{
	int n;
	int a[1000];

	printf("입력할 숫자의 개수: ");
	scanf_s("%d", &n);

	printf("%d개의 숫자를 입력 : ", n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	// 출력(순서대로)
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// 출력(거꾸로)
	for (int i = n-1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");

}