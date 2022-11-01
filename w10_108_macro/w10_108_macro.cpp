#include <stdio.h>
#define CNT 3	// #define 뒤에는 ;이 없다
#define SQR(x) ((x)*(x))
// 10개의 정수를 입력받는다
int main()
{
	printf("%d\n", 100/SQR(5));   
	// SQR(5+1) ==> 5+1*5+1
	// SQR(5+1) ==> (5+1)*(5+1)
	// 100/SQR(5) ==> 100/((5)*(5))

	const double pi = 3.14;

	printf("%f\n", pi);

	//int a[CNT];

	//for (int i = 0; i < CNT; i++)
	//	scanf_s("%d", &a[i]);

	//for (int i = 0; i < CNT; i++)
	//	printf("%d\n", a[i]);
}
