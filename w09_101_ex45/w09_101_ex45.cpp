// 워크시트 45번
#include <stdio.h>

// call-by-address(주소에 의한 호출)
void cycle(int *a, int *b, int *c)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = *c;
	*c = tmp;
}

int main()
{
	int a, b, c;

	printf("3개 숫자 입력 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	cycle(&a, &b, &c);
	printf("%d %d %d\n", a, b, c);
}