// 배열을 매개변수로 보내기
#include <stdio.h>

void printArr(int v[])
{
	for (int i = 0; i < 4; i++)
		printf("%d\n", v[i]);
}

void printArr1(int *p)
{
	for (int i = 0; i < 4; i++)
		printf("%d\n", *(p + i));
}

void printArr2(int a[])
{
	for (int i = 0; i < 4; i++)
		a[i]++;
}

int main()
{
	int a[4] = { 1,2,3,4 };
	printArr(a);
	printArr1(a);
	printArr2(a);
	for (int i = 0; i < 4; i++)
		printf("a[%d] = %d\n", i, a[i]);
}