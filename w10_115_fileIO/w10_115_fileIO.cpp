#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *in;
	FILE *out;

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "w");

	if (in == NULL) {
		printf("input.txt 파일이 없습니다.");
		return 0;
	}

	int n;
	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);

	fclose(in);
	fclose(out);
}