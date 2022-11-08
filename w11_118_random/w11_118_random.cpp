#include <stdio.h>
#include <stdlib.h>	// rand()를 사용하기 위해
#include <time.h>	// time()을 쓰기 위해

int main()
{
	srand(time(0));	// 랜덤 시드
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", rand());
	}

	// 주사위 10번 던지는 것을 시뮬레이션하자
	for (int i = 0; i < 10; i++)
	{
		printf("주사위 %d = %d\n", i, rand() % 6 + 1);
		if (i == 5)
			exit(0);
	}
}