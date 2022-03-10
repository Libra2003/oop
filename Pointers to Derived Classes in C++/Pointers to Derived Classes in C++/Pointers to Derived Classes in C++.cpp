#include<iostream>
using namespace std;


class Base {
public:
	int var_Base;
	virtual void display() {
		cout << "Displaying the Base class Variable " << var_Base << endl;
	}
};

class Derived:public Base {
public:
	int var_Derived;
	void display() {
		cout << "Displaying the Base class Variable " << var_Base << endl;
		cout << "Displaying the Derived class Variable " << var_Derived << endl;
	}
};

int main() {
	Base* base_Pointer;
	Base base_obj;
	Derived* derived_Pointer;
	Derived derived_obj;
	base_Pointer = &derived_obj;
	base_Pointer->var_Base = 23;
	derived_obj.var_Derived = 34;
	derived_obj.display();
	base_Pointer->display();

	derived_Pointer = &derived_obj;
	derived_Pointer->var_Base = 123;
	derived_Pointer->var_Derived = 345;
	derived_Pointer->display();


	system("pause");
	return 0;
}