#include <stdio.h>

int main()
{
	int a = 3;

	// 논리연산자와 비교연산자가 같이 사용될떄
	// 비교연산자가 먼저 계산되고 나중에 논리연산자가 계산
	bool p = (a >= 1) && (a <= 10);
	bool q = (a == 3) || (a == 7);
	bool r = !q;

	// 논리연산자의 결과는 참, 거짓
	// C언어에서 참은 1, 거짓은 0로 출력
	printf("%d %d %d\n", p, q, r);

	int x = 3;
	int y = 4;
	int z = 5;

	printf("%d\n", x = y = z);
}