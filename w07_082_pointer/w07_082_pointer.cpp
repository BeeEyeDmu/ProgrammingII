#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;

	int *ptr = &a;
	printf("%d\n", *ptr); // ptr이 가리키는 곳의 내용

	ptr = &b;
	printf("%d\n", *ptr); // ptr이 가리키는 곳의 내용
}