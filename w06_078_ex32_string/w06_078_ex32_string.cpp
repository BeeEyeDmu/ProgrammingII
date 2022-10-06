#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s[10];

	//scanf_s("%s", s, 10);
	scanf("%s", s);

	printf("%s\n", s);

	for (int i = 0; s[i] != '\0'; i++)
		printf("%c\n", s[i]);

	for (int i = 0; i < strlen(s); i++)
		printf("%c\n", s[i]);


}