#include <stdio.h>

int main()
{
	// 10개의 숫자를 입력받아 배열에 저장한다.
	int a[10];

	printf("10개의 숫자를 입력:");
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);

	int first = a[0];
	int second = a[0];

	for (int i = 1; i < 10; i++)
		if (first < a[i]) {
			second = first;
			first = a[i];
		}
		else if (second < a[i])
			second = a[i];

	printf("first = %d, second = %d\n", 
		first, second);
}