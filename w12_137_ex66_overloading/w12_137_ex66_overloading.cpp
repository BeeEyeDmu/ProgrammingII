// w12_137_ex66_overloading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void calc(int a, int b)
{
	cout << "더하기 : " << a + b << endl;
	cout << "빼기 : " << a - b << endl;
	cout << "곱하기 : " << a * b << endl;
	cout << "나누기 : " << a / b << endl;
}

void calc(double a, double b)
{
	cout << "더하기 : " << a + b << endl;
	cout << "빼기 : " << a - b << endl;
	cout << "곱하기 : " << a * b << endl;
	cout << "나누기 : " << a / b << endl;
}

int main()
{
	int a, b;
	double c, d;

    cout << "두 정수 입력 : ";
	cin >> a >> b;

	calc(a, b);

	cout << "두 실수 입력 : ";
	cin >> c >> d;

	calc(c, d);
}
