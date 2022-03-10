#include<iostream>
using namespace std;

class Base1 {
protected:
	int base1int;
public:
	void set_base1int(int a);

};

void Base1::set_base1int(int a) {
	base1int = a;

}

class Base2 {
protected:
	int base2int;
public:
	void set_base2int(int b);
	int getint();
};

void Base2::set_base2int(int b) {
	base2int = b;
}
int Base2::getint() {
	cout << "Base2: " << base2int << endl;
	return base2int;
}

class Base3 {
protected:
	int base3int;
public:
	void set_base3int(int c);
};

void Base3::set_base3int(int c) {
	base3int = c;
}

class Derived : public Base1, public Base2, public Base3 {
public:
	void show();
	
};

void Derived::show() {
	set_base1int(34);
	set_base2int(5);
	set_base3int(45);
	cout << "The value of Base 1 is: " << base1int << endl;
	cout << "The value of Base 2 is: " << base2int << endl;
	cout << "The value of Base 3 is: " << base3int << endl;
	cout << "The sum of all Bases: " <<
		base1int + base2int + base3int << endl;
}

int main() {
	Derived maths;
	Base2 phy;
	phy.set_base2int(23);
	phy.getint();
	maths.set_base1int(34);
	maths.set_base2int(5);
	maths.set_base3int(45);
	maths.show();
}