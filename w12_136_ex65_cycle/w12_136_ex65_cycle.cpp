// w12_136_ex65_cycle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

void cycle(int &a, int &b, int &c)
{
	int tmp = a;
	a = b;
	b = c;
	c = tmp;
}

int main()
{
	int a, b, c;

    cout << "3개의 숫자를 입력하세요 : ";
	cin >> a >> b >> c;

	cycle(a, b, c);
	cout << "a = " << a << ", b = " << b
		<< ", c = " << c << endl;
}
