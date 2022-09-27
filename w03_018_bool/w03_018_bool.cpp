#include <stdio.h>

int main()
{
	int a = 30, b = 50;

	// 비교연산자 6개의 결과는 참, 거짓
	// C언어에서 참은 1, 거짓은 0으로 출력한다 
	bool p = a > b;
	bool q = a < b;
	bool r = a == b;

	printf("%d %d %d\n", p, q, r);
}