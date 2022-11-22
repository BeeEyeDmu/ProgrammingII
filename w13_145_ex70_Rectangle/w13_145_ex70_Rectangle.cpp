#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	int GetX() { return x; }
	int GetY() { return y; }
	void SetX(int x) { this->x = x; }
	void SetY(int y) { this->y = y; }
};

class Rectangle {
private:
	Point p1;	Point p2;
public:
	Rectangle(Point p1, Point p2) {
		this->p1 = p1;		this->p2 = p2;
	}
	int getArea() {
		return abs(p1.GetX() - p2.GetX()) * abs(p1.GetY() - p2.GetY());
	}
};

int main()
{
	Point p1, p2;
	int x, y;

	cout << "p1의 좌표를 입력 : ";
	cin >> x >> y;
	p1.SetX(x); p1.SetY(y);

	cout << "p2의 좌표를 입력 : ";
	cin >> x >> y;
	p2.SetX(x);	p2.SetY(y);

	Rectangle r(p1, p2);
	cout << "사각형의 면적은 : " 	<< r.getArea() << endl;	

}
