#include <stdio.h>

int main()
{
	int a[10][10];
	int col, row;	// 행, 열

	printf("행과 열의 수를 입력: ");
	scanf_s("%d %d", &col, &row);

	// 입력
	for (int i = 0; i < col; i++) {
		printf("%d번째 줄 입력 :", i);
		for (int j = 0; j < row; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}

	// 2차원 배열을 출력
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}

	// 각 행의 합을 계산
	for (int i = 0; i < col; i++) {
		int sum = 0;
		for (int j = 0; j < row; j++)
			sum += a[i][j];
		printf("%d행의 합 = %d\n", i, sum);
	}




}