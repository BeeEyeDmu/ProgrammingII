// C 함수의 가장 중요한 특성
// call by value(값에 의한 호출)
// 호출할 때 값만 복사해서 넘겨준다
#include <stdio.h>

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	printf("in swap() : %d %d\n", a, b);
}

void swap2(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	printf("in swap2() : %d %d\n", *a, *b);
}

int main()
{
	int a, b;

	scanf_s("%d %d", &a, &b);
	swap(a, b);
	printf("in main() : %d %d\n", a, b);

	swap2(&a, &b);
	printf("in main() : %d %d\n", a, b);
}
