#include <stdio.h>
#include <string.h>

int main()
{
	// 문자열 2개 필요
	char s[100];
	char t[100];

	printf("문자열 입력: ");
	scanf_s("%s", s, sizeof(s));

	strcpy_s(t, s);

	printf("%s\n%s\n", s, t);
}