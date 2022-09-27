#include <stdio.h>

int main()
{
	printf("%c + %c = %c\n", '2', '3', '2' + '3');
	printf("%c + %c = %d\n", '2', '3', '2' + '3');
	printf("%d + %d = %d\n", '2', '3', '2' + '3');

	printf("%c + %c = %c\n", '2', '3', '2' + 3);

	// 대문자를 소문자로 변환 : 32를 더한다
	printf("%c -> %c\n", 'A', 'A' + 32);
	// 소문자를 대문자로 변환 : 32를 뺀다
	printf("%c -> %c\n", 'f', 'f' - 32);

	// A~Z까지 출력
	for (int i = 'A'; i <= 'Z'; i++)
		printf("%c = %d\n", i, i);
	// a~z까지 출력
	for (int i = 97; i <= 97+25; i++)
		printf("%c = %d\n", i, i);
}