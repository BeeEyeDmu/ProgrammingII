#include <stdio.h>
void rec(int n);	// 함수의 원형(prototype)

int main()
{
	rec(1);
}

// 재귀함수:recursive function
// 반드시 끝나는 조건이 있어야 한다
void rec(int n)
{
	if (n > 5)
		return;
	printf("n=%d\n", n);
	rec(n+1);	// 재귀호출
}