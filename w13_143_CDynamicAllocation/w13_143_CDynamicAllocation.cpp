// w13_143_CDynamicAllocation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *a;
	int n;

	printf("몇개의 데이터 : ");
	scanf_s("%d", &n);

	a = (int *)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		printf("숫자 입력 : ");
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	free(a);
}
