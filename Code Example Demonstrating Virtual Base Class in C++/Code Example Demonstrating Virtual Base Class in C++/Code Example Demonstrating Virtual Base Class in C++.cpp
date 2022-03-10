#include<iostream>
using namespace std;

class A {

};

class B :public virtual A {

};

class C :public virtual A {
public:
	int a;
};

class D : public virtual C {
public:
	int a = 110;
};

class E :public virtual C, public virtual D {

};

int main() {
	E e;
	e.a;

	system("pause");
	return 0;
}