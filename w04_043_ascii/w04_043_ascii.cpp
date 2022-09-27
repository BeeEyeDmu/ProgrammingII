#include <stdio.h>

int main()
{
	int i = 'A';

	while (i <= 'Z') {
		printf("%d %c\n", i, i);
		i++;
	}
}