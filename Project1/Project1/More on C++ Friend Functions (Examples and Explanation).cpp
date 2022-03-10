#include<iostream>
using namespace std;

class Y;

class X {
	int data;
public:
	void setValue(int value);
	friend void sum(X, Y);

};

void X::setValue(int value) {
	data = value;

}

class Y {
	int num;
public:
	void setNum(int value);
	friend void sum(X, Y);

};

void Y::setNum(int value) {
	num = value ;
	
}

void sum(X o1, Y o2) {
	cout << "Sum of two num of 2 classes is " << o1.data + o2.num << endl;
}

int main() {
	X a1;
	a1.setValue(3);
	Y b1; 
	b1.setNum(15);
	sum(a1, b1);

}