// w12_135_ex64_for.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
// 교과서 263쪽~ 범위기반 for 문
#include <iostream>
using namespace std;

int main()
{
	int a[10];
	int max, min;
	float avg = 0;

	for (int i = 0; i < 10; i++)
		cin >> a[i];

	max = min = a[0];
	for (int x : a) {
		if (min > x)
			min = x;
		else if (max < x)
			max = x;
		avg += x;
	}
	avg /= 10;

	cout << "최소값 = " << min << endl;
	cout << "최대값 = " << max << endl;
	cout << "평균 = " << avg << endl;
}
