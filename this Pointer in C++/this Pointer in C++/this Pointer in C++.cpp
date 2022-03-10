#include<iostream>
using namespace std;
class A {
	int a;
public:
	A& setData(int a) {
		this->a = a;
		return*this;
	}
	A& setData1(int a) {
		this->a = a;
		return *this;
	}
	

	void getData() {
		cout << "The value of a is " << a << endl;

	}
};


int main() {
	A a;
	a.setData(34);
	a.getData();
	a.setData1(23).getData();

	system("pause");
	return 0;
}