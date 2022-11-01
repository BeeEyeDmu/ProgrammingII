#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define CNT	100
typedef struct point {
	int x; 
	int y;
} Point;

double distance(struct point p1, struct point p2)
{
	return sqrt((p2.x - p1.x)*(p2.x - p1.x)
		+ (p2.y - p1.y)*(p2.y - p1.y));
}

int main()
{
	Point p[CNT];

	// 랜덤함수 사용하기
	// 1. 랜덤 시드(seed) 설정
	// 2. rand() 함수 호출하여 정수의 랜덤값을 가져온다
	srand(time(0));	// 현재시간으로 시드 설정
	for (int i = 0; i < CNT; i++)
	{
		p[i].x = rand()%1000;	// 좌표는 0~999사이의 값
		p[i].y = rand()%1000;
	}

	double min = 1000;
	int min_i;
	int min_j;
	for (int i = 0; i < CNT; i++)
	{
		for (int j = 0; j < CNT; j++)
		{
			if (i != j && min > distance(p[i], p[j])) {
				min_i = i;
				min_j = j;
				min = distance(p[i], p[j]);
			}
		}
	}

	printf("점 %d(%d, %d)와 점 %d(%d, %d)이 가장 가까운 점의 쌍입니다.\n거리 = %f\n",
		min_i, p[min_i].x, p[min_i].y, min_j, p[min_j].x, p[min_j].y, min);
}