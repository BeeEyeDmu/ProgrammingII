#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char greeting[100] = "Hello,  ";
	char name[100];

	printf("이름 입력: ");
	scanf("%s", name);	// &name 아님!!

	strcat(greeting, name);
	strcat(greeting, "!");

	printf("%s\n", greeting);
}