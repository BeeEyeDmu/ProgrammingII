// w14_156_fuctionPointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int square(int n) {
	return n * n;
}

int myFunc(int n) {
	return n * (n - 15) / 2;
}

// 배열에서 최소값을 찾아서 리턴하는 함수
int arrMin(int a[], int n) {
	int min = a[0];
	for (int i = 1; i < 7; i++)
		if (a[i] < min)
			min = a[i];
	return min;
}
int arrSqrMin(int a[], int n) {
	int min = a[0]*a[0];
	for (int i = 1; i < 7; i++)
		if (a[i]*a[i] < min)
			min = a[i]*a[i];
	return min;
}

int arrFnMin(int a[], int n, int (*f)(int)) {
	int min = f(a[0]);
	for (int i = 1; i < n; i++)
		if (min > f(a[i]))
			min = f(a[i]);
	return min;
}

int main()
{
	int a[7] = { 3, 5, 7, -2, -9, 4, 8 };
	int min;

	min = arrMin(a, 7);	// a[]에서 최소값을 찾는 함수
	cout << min << endl;

	min = arrSqrMin(a, 7);	// a[]에서 최소값을 찾는 함수
	cout << min << endl;

	min = arrFnMin(a, 7, square);	// a[]에서 최소값을 찾는 함수
	cout << min << endl;

	min = arrFnMin(a, 7, myFunc);	// a[]에서 최소값을 찾는 함수
	cout << min << endl;
}
