#include <stdio.h>
enum fruit { Apple, Banana, Orange }; 

void printFruit(fruit x)
{
	switch (x) {
	case Apple:
		printf("사과\n");
		break;
	case Banana:
		printf("바나나\n");
		break;
	case Orange:
		printf("오렌지\n");
		break;
	}
}

int main()
{
	fruit x, y, z;
	x = Apple;
	y = Banana;
	z = Orange;

	printFruit(x);
	printFruit(y);
	printFruit(z);
	//printf("Apple = %d\n", x);
	//printf("Banana = %d\n", y);
	//printf("Orange = %d\n", z);
}