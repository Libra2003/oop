#include<iostream>
using namespace std;

class Base1 {
public:
	void greet();
};

void Base1::greet() {
	cout << "Hello world" << endl;
}

class Base2 {
public:
	void greet();
};

void Base2::greet() {
	cout << "Kaise ho?" << endl;
}

class Derived :public Base1, public Base2 {
public:
	void greet();
	void say();


};

void Derived::greet() {
	Base2::greet();
}

void Derived::say() {
	cout << "Hi" << endl;
}

class Derived2 :public Derived {
public:
	void say();
};

void Derived2::say(){

		cout << "Bye" << endl;
	
}

int main() {
	Base1 a;
	a.greet();
	Base2 b;
	b.greet();
	Derived c;
	c.greet();
	c.say();
	Derived2 d;
	d.say();

	

	system("pause");
	return 0;
}

