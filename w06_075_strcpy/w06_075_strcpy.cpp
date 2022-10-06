#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "hello";  // s1[6]
	char s2[100];

	strcpy(s2, s1);

	printf("%s\n", s1);
	printf("%s\n", s2);

	strcpy(s2, "강병익!!!!!!!");

	printf("%s\n", s1);
	printf("%s\n", s2);
}