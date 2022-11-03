#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *in;
	in = fopen("input.txt", "r");

	int n;
	for (int i = 0; i < 3; i++)
	{
		fscanf(in, "%d", &n);
		printf("%d\n", n);
	}
}