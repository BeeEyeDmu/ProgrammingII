#include <iostream>
using namespace std;

enum Day { 일, 월, 화, 수, 목, 금, 토};

int main()
{
	int x;

	cout << "요일을 숫자로 입력하세요: ";
	cin >> x;

	switch (x) {
	case 일:
		cout << "일요일입니다!";
		break;
	case 월:
		cout << "월요일입니다!";
		break;
	case 화:
		cout << "화요일입니다!";
		break;
	case 수:
		cout << "수요일입니다!";
		break;
	case 목:
		cout << "목요일입니다!";
		break;
	case 금:
		cout << "금요일입니다!";
		break;
	case 토:
		cout << "토요일입니다!";
		break;
	default:
		cout << "잘못 입력하셨어요!";
		break;
	}

}