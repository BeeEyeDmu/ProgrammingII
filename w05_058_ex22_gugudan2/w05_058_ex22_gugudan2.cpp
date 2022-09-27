#include <stdio.h>

int main()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 5; j++)
			printf("%d x %d = %d\t", j, i, i*j);
		printf("\n");
	}
	printf("\n");

	for (int i = 1; i <= 9; i++) {
		for (int j = 6; j <= 9; j++)
			printf("%d x %d = %d\t", j, i, i*j);
		printf("\n");
	}
}