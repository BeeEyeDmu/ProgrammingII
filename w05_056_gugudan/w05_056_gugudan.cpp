#include <stdio.h>

// 구구단(5단)
/*
	5 x 1 = 5
	5 x 2 = 10
	5 x 3 = 15
	..	
	5 x 9 = 45
	두번째 숫자가 1~9까지 변화(반복문 1개 필요)
*/
int main()
{
	//int n;

	//printf("n을 입력: ");
	//scanf_s("%d", &n);

	//for (int i = 1; i <= 9; i++)
	//	printf("%d x %d = %d\n", n, i, n*i);

	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++)
			printf("%d x %d = %d\t", j, i, i*j);
		printf("\n");
	}
}