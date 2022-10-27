#include <stdio.h>

int main()
{
	typedef struct Point {
		float x;	// 멤버
		float y;	// 멤버
	} Point;

	// 구조체의 초기화
	struct Point pos = { 1.1, 2.2 }; 
	printf("좌표 : (%f, %f)\n", pos.x, pos.y);
	
	pos.x = 10.1;
	pos.y = 20.2;
	printf("좌표 : (%f, %f)\n", pos.x, pos.y);

	struct Point p;
	p = pos;
	printf("좌표 : (%f, %f)\n", p.x, p.y);

	Point pnt = pos;
	printf("좌표 : (%f, %f)\n", pnt.x, pnt.y);
}