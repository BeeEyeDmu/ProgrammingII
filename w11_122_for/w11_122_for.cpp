// w11_122_for.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';
	cout << endl;

	for (int &x : a)
		cout << x++ << ' ';
	cout << endl;

	for (int x : a)
		cout << x << ' ';
	cout << endl;
}
