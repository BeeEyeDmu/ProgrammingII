// w13_141_staticMemberId.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class Color {
// 변수
private:
	static int idCounter;
	int id;
	float r, g, b;
// 함수
public:
	//Color() : r(0), g(0), b(0), id(idCounter++) {} // p313
	//Color() {
	//	r = 0;
	//	g = 0;
	//	b = 0;
	//	id = idCounter++;
	//}
	Color(float r=0, float g=0, float b=0) : r(r), g(g), b(b), id(idCounter++) {}
	//Color(float r, float g, float b) {
	//	this->r = r;
	//	this->g = g;
	//	this->b = b;
	//	this->id = idCounter++;
	//}

	int GetId() { return id; }
	float GetR() { return r; }
	float GetG() { return g; }
	float GetB() { return b; }

	static Color MixColors(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + a.g) / 2, (a.b + b.b) / 2);
	}
};

int Color::idCounter = 1;

int main()
{
	Color red = Color(1, 0, 0);
	Color blue = Color(0, 0, 1);
	Color purple = Color::MixColors(red, blue);

	cout << red.GetId() << endl;
	cout << blue.GetId() << endl;
	cout << purple.GetId() << endl;

}

