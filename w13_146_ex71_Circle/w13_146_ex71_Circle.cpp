// w13_146_ex71_Circle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle(int r = 0) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius*radius;
	}
};

int main()
{
	Circle donut(5);
	Circle pie(10);
	Circle pizza(15);

	cout << "도넛 : " << donut.getArea() << endl;
	cout << "파이 : " << pie.getArea() << endl;
	cout << "피자 : " << pizza.getArea() << endl;
}
