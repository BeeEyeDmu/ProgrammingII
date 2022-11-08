// w11_121_string.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string greeting;

	cout << "이름을 입력 : ";
	cin >> name;
	greeting = "안녕하세요, " + name + "님!";

	cout << greeting << endl;
	cout << name << "은 총 "
		<< name.length() << "글자입니다." 
		<< endl;
	cout << name << "의 첫글자는 " << name[0] 
		<< "입니다." << endl;
}
