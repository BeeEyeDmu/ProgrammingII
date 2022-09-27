#include <stdio.h>

int main()
{
	int n;

	printf("n을 입력: ");
	scanf_s("%d", &n);

	// Ctrl-KC (코멘트), Ctrl-KU (언코멘트)
	//int sum = 0;
	//for (int i = 1; i <= n; i++)
	//	sum += i;

	int sum = 0;
	int i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	을printf("1에서 %d까지의 합 = %d\n", n, sum);

	// 무한루프
	//while (true);
	//{

	//}

	// 10번 반복
	for (int i = 0; i < 10; i++)
		printf("Hello\n");
	printf("\n\n");
	for (int i = 1; i <= 10; i++);
		printf("Hello\n");

	
}