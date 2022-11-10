// w11_129_overloading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void swap(double &a, double &b)
{
	double tmp = a;
	a = b;
	b = tmp;
}
void swap(char &a, char &b)
{
	char tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a = 10, b = 20;
	double da = 12.34, db = 56.78;
	char ca = 'a', cb = 'b';

	swap(a, b);
	swap(da, db);
	swap(ca, cb);

	cout << a << " " << b << endl;
	cout << da << " " << db << endl;
	cout << ca << " " << cb << endl;
}
