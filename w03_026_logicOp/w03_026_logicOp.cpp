#include <stdio.h>

int main()
{
	int x = 3;
	int y = 4;

	// C언어에서 0은 거짓, 0이 아닌 모든 숫자는 참
	// 출력할 때는 참은 1, 거짓은 0으로 출력한다
	printf("x && y = %d\n", x && y);
	printf("x || y = %d\n", x || y);
	printf("!x = %d\n", !x);
	printf("!y = %d\n", !y);

}