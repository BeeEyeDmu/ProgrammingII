// w13_144_ex68_Point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

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

	static double distance(Point a, Point b) {
		return sqrt((a.x - b.x)*(a.x - b.x)
			+ (a.y - b.y)*(a.y - b.y));
	}

	double dist(Point a) {
		return sqrt((x - a.x)*(x - a.x) 
			+ (y - a.y)*(y - a.y));
	}
};

int main()
{
	Point p3;
	Point p4(10, 20);

	cout << "p3와 p4의 거리는 " 
		<< Point::distance(p3, p4) << endl;
	cout << "p3와 p4의 거리는 " 
		<< p3.dist(p4) << endl;

	cout << "p3( " << p3.GetX() << ", "
		<< p3.GetY() << ")\n";
	cout << "p4( " << p4.GetX() << ", "
		<< p4.GetY() << ")\n";
}
