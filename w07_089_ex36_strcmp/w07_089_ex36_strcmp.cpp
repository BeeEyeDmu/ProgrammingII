#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	char b[100];
	char c[100];

	printf("세개의 문자열 입력: \n");
	scanf_s("%s", a, sizeof(a));
	scanf_s("%s", b, sizeof(b));
	scanf_s("%s", c, sizeof(c));

	printf("%s %s %s\n", a, b, c);

	// 사전순서로 출력
	// 3개의 크기관계 비교 방법
	// a > b ==> strcmp(a, b) > 0
	if (strcmp(a, b) < 0) {
		if (strcmp(b, c) < 0)  // a>b>c
			printf("%s %s %s\n", a, b, c);
		else if (strcmp(a, c) < 0)	// a>c>b
			printf("%s %s %s\n", a, c, b);
		else  // c>a>b
			printf("%s %s %s\n", c, a, b);
	}
	else {   // b > a
		if (strcmp(a, c) < 0)   // b>a>c
			printf("%s %s %s\n", b, a, c);
		else if (strcmp(c, b) < 0)  // c>b>a
			printf("%s %s %s\n", c,b, a);
		else   // b>c>a
			printf("%s %s %s\n", b, c, a);
	}
}