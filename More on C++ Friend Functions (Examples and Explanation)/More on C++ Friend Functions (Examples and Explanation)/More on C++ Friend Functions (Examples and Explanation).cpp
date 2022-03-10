#include<iostream>
using namespace std;

class X;
class Y;
class X {
	int data;
public:
	X(int data1 = 0);
	void setData(int value1);
	
	friend void add(X o1, Y o2);
	friend class Y;


};
class Y {
	int num;
public:
	Y(int num1 = 0);
	void setNum(int value2);
	friend void add(X o1, Y o2);
	void addSum(X o1, X o2);
	friend class X;

};
// Constructors
//X::X(int data1) {
//	data = data1;
//}
//Y::Y(int num1) {
//	num = num1;
//}
// Set Functions
void X:: setData(int value1) {
	data = value1;
}
void Y::setNum(int value2) {
	num = value2;
}

//Friend Functions
void add(X o1, Y o2) {
	cout << o1.data + o2.num << endl;


}


int main() {
	X o1;
	o1.setData(5);
	Y o2;
	o2.setNum(3);

}