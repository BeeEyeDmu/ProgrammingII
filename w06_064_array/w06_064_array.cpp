#include <stdio.h>

int main()
{
	int a[5] = { 1,3,5,7,9}; // 배열의 초기화

	//a[0] = 1;
	//a[1] = 2;
	//a[2] = 3;
	//a[3] = 4;
	//a[4] = 5;
	/*a[5] = 6;*/

	for (int i = 0; i < 5; i++)
		printf("%d\n", a[i]);

	printf("배열의 개수: %d\n",
		sizeof(a) / sizeof(a[0])); 
	// 배열의 크기 / 원소의 크기 = 원소의 갯수
}