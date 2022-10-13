#include <stdio.h>

int main()
{
	int a = 10;
	int *p;	// 포인터는 주소를 저장하는 변수
	p = &a;	// & 변수 : 변수가 저장된 곳의 주소
			// * 포인터 : 포인터가 가리키는 곳의 내용
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%p\n", p);

	*p = 20;  // 포인터를 이용하여 변수의 값을 바꾸기
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%p\n", p);
}