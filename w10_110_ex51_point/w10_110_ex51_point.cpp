#include <stdio.h>
#include <math.h>

struct point
{
	int x; 
	int y;
};

double distance(struct point p1, struct point p2);

int main()
{
	struct point p1, p2;

	printf("점의 좌표 : ");
	scanf_s("%d %d", &(p1.x), &(p1.y));
	
	printf("점의 좌표 : ");
	scanf_s("%d %d", &(p2.x), &(p2.y));

	printf("두 점 사이의 거리는 : %f\n", 
		distance(p1, p2));
}

double distance(struct point p1, struct point p2)
{
	return sqrt((p2.x - p1.x)*(p2.x - p1.x)
		+ (p2.y - p1.y)*(p2.y - p1.y));
}