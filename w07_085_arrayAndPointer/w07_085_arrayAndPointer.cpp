#include <stdio.h>

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };

	// 배열은 메모리에 나란히 저장된다
	for (int i = 0; i < 10; i++)
		printf("&a[%d] = %p\n", i, &a[i]);
	 
	// 배열의 이름은 배열의 첫번째 원소의 주소
	printf("a = %p\n", a);
	printf("&a[0] = %p\n", &a[0]);
}