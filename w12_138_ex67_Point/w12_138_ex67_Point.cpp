// w12_138_ex67_Point.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Point1 {
public:
	int x;
	int y;
};

class Point {
private:
	int x;
	int y;
public:
	// 매개변수 없는 생성자
	Point() {
		x = 0;	// this->x 와 같다
		y = 0;
	}
	// 매개변수가 있는 생성자
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void SetX(int x) {
		if( x >= 0)
			this->x = x;  
		// this는 자기 자신을 가리키는 포인터
		// 교과서 298쪽
	}
	int GetX() {
		return x;  // this->x 라고 써도 된다
	}
	void SetY(int y) {
		if(y >= 0)
			this->y = y;
		// this는 자기 자신을 가리키는 포인터
		// 교과서 298쪽
	}
	int GetY() {
		return y;  // this->y 라고 써도 된다
	}
};

int main()
{
	Point p1, p2;
	Point1 p3, p4;

	// p3를 (10, 10)으로 만든다
	// 멤버 변수가 public이므로 
	// 클래스 밖에서 수정할 수 있다
	// 캡슐화에 어긋나므로 쓰지 않는게 좋다
	p3.x = 10;
	p3.y = 10;
	cout << "p3(" << p3.x << ", "
		<< p3.y << ")" << endl;

	// 캡슐화를 위해
	// Setter와 Getter를 사용한다
	p1.SetX(10);
	p1.SetY(10);

	p2.SetX(20);
	p2.SetY(20);

	cout << "p1(" << p1.GetX() << ", "
		<< p1.GetY() << ")" << endl;
	cout << "p2(" << p2.GetX() << ", "
		<< p2.GetY() << ")" << endl;

	Point a;	// 매개변수 없는 생성자 실행
	Point b(10, 20); // 매개변수 있는 생성자
	cout << "a(" << a.GetX() << ", "
		<< a.GetY() << ")" << endl;
	cout << "b(" << b.GetX() << ", "
		<< b.GetY() << ")" << endl;

}
