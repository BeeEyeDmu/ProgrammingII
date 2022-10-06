// w06_080_ex34_strlen.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];

	//scanf("%s", str); // scanf_s("%s", str, 100);

	scanf("%[^\n]", str);  // 빈칸을 포함해서 \n 앞까지
	printf("%s = %d\n", str, strlen(str));
}