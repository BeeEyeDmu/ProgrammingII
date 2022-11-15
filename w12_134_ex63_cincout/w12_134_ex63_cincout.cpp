// w12_134_ex63_cincout.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int id;
	string name;

    cout << "학번 : ";
	cin >> id;
	cout << "이름 : ";
	cin >> name;

	cout << "당신의 학번은 " << id
		<< ", 이름은 " << name << "입니다\n";
}
