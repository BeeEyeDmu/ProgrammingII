// w13_142_dynamicAllocation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int *a;
	int n;

	cout << "몇개의 데이터를 저장할까요? ";
	cin >> n;

	a = new int[n];  // 동적할당이므로 n을 쓸 수있다

	for (int i = 0; i < n; i++) {
		cout << "데이터 입력 : ";
		cin >> a[i];
	}

	// 출력
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	delete[] a;
}
