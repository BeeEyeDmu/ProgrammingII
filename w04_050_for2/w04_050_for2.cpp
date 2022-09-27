// for 문을 사용할 때 주의할 점

#include <stdio.h>

int main() 
{
	int i = 100;

	for (int i = 0; i < 10; i++)
		printf("for: %d\n", i);
	printf("%d\n", i);
}