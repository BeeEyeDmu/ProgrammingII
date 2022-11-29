#include <iostream>
using namespace std;

class Base {
public:
	void bFunc() {
		cout << "Hello from base!" << endl;
	}
	int bNum;
};

class Derived : public Base {
public:
	void dFunc() {
		cout << "Hello from derived! " << endl;
	}
	int dNum;
};

class CBaby : public Derived {
public:
	void cFunc() {
		cout << "Hello from CBaby! " << endl;
	}
	int cNum;
};

int main()
{
	Base b;
	Derived d;
	CBaby c;

	b.bFunc();
	b.bNum = 1;

	d.bFunc();
	d.bNum = 2;

	d.dFunc();
	d.dNum = 1;

	cout << "Base:bNum = " << b.bNum << endl;
	cout << "Derived:bNum = " << d.bNum << endl;
	cout << "Derived:dNum = " << d.dNum << endl;
}
