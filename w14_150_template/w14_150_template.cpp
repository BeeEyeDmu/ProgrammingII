// w14_150_template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

template<typename T>
T getArraySum(T a[], int n) {
	T sum = a[0];
	for (int i = 1; i < n; i++)
		sum += a[i];
	return sum;
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	float farr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double darr[] = { 1.2, 3.4, 5.6, 7.8, 8.9 };
	string sarr[] = { "abc", "hello", "hi" };

	cout << getArraySum<int>(arr, 5) << endl;
	cout << getArraySum<float>(farr, 5) << endl;
	cout << getArraySum<double>(darr, 5) << endl;
	//string s = getArraySum<string>(sarr, 3);
	//cout << s << endl;
	cout << getArraySum<string>(sarr, 3);
}
