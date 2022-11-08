// w11_ex58_coffee.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

enum Size { Short, Tall, Grande, Venti};
char sizeName[][7] = { "Short", "Tall", "Grande", "Venti" };
int priceAmericano[] = { 3800, 4100, 4600, 5100 };
int priceCapuccino[] = { 4600, 5900, 6400, 6900 };

int main()
{
	cout << "커피가격표(아메리카노)" << endl;
	for (int i = Short; i <= Venti; i++)
		cout << sizeName[i] << " : " 
			 << priceAmericano[i] << endl ;

	cout << endl << "커피가격표(카푸치노)" << endl;
	for (int i = Short; i <= Venti; i++)
		cout << sizeName[i] << " : "
		<< priceCapuccino[i] << endl;
}
