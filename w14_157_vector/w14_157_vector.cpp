// w14_157_vector.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	vector<double> w = { 1.1, 2.2, 3.3 };

	for (int i : v)
		cout << i << " ";
	cout << endl;

	for (int i = 0; i < 3; i++)
		cout << v[i] << " ";
	cout << endl;

	for (double d : w)
		cout << d << " ";
	cout << endl;

	pair<int, string> a = { 123, "abc" };
	cout << a.first << " ";
	cout << a.second << endl;

	a.second = "def";
	cout << a.first << " " << a.second << endl;

}
