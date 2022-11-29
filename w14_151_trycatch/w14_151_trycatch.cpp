// w14_151_trycatch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

// 재귀함수(recursive fuction)
// 반드시 끝나는 조건이 있어야 한다
// n! = 1*2*...(n-1)*n = (n-1)!*n;
int fact(int n) {
	if (n == 1) return 1;
	return n * fact(n - 1);
}

int main()
{
	int n;

	try {
		cout << "자연수를 입력 : ";
		cin >> n;
		if (n <= 0)
			throw n;
		cout << fact(n) << endl;
	}
	catch (int e) {  // exception(예외)
		cout << e << " : 자연수가 아님!" << endl;
	}
}
