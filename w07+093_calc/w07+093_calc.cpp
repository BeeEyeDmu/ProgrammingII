// 리턴값이 있는 함수
// 리턴타입 함수이름(매개변수) { }
#include <stdio.h>

// 함수의 정의
int plus(int a, int b)
{
	return a + b;
}

int minus(int x, int y)
{
	return x - y;
}

int main()
{
	int sum = plus(3, 5);
	int diff = minus(3, 5);

	printf("%d\n", sum);
	printf("%d\n", diff);
}