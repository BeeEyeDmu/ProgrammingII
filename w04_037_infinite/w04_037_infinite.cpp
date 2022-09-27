#include <stdio.h>

int main()
{
	int i = 1;

	while (true) {
		printf("%d ", i);
		i++;
		if (i > 100)
			break;
	}
}