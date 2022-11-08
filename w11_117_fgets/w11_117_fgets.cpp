#include <stdio.h>

int main()
{
	char s[20];
	int n;

	fgets(s, 20, stdin);
	puts(s);

	sscanf_s(s, "%d", &n);
	printf("s = %d\n", n);

	char ss[20];
	sprintf_s(ss, "%d", n);
	printf("ss = %s\n", ss);
}