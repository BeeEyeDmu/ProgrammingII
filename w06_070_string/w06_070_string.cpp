#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[] = "hello";
	char t[] = { 'h', 'e', 'l', 'l', 'o', '\0' };

	printf("%s %d\n", s, sizeof(s)); 
	printf("%s %d\n", t, sizeof(t));

	char u[1000];

	printf("문자열 입력 : ");

	// F1 = 두움말
	//scanf_s("%s", u, sizeof(u)); 
	// VS에서는 맨 뒈에 숫자를 쓴다
	scanf("%s", u);
	printf("%s\n", u);

	scanf("%s", u);
	printf("%s\n", u);
	getchar();	// '\n'을 읽어낸다

	fgets(u, 1000, stdin);
	printf("%s\n", u);

	// scanf("%s", ..); 빈칸으로 구분되는 단어 
	// scanf()는 맨 뒤에 있는 '\n'을 읽지 않는다
	// '\n'을 입력에서 읽어내려면 getchar()를 사용한다
	// fgets()는 한 줄을 '\n'까지 읽는다
}