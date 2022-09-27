#include <stdio.h>

int main()
{
	int n;

	printf("n 입력: ");
	scanf_s("%d", &n);

	// ex) 27-1
	printf("\nex) 27-1\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\nex) 27-2\n");
	// ex) 27-2
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
		
	printf("\nex) 27-3\n");
	// ex) 27-3
	for (int i = 5; i > 0; i--) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\nex) 27-4\n");
	// ex) 27-4
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\nex) 27-5\n");
	// ex) 27-5
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	printf("\nex) 27-6\n");
	// ex) 27-6
	for (int i = n; i > 0; i--) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 2 * i - 1; j > 0; j--)
			printf("*");
		printf("\n");
	}
}