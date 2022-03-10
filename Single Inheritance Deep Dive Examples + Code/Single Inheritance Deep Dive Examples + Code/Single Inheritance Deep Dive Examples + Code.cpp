#include<iostream>
using namespace std;

class Base {
	int data1;
public:
	Base(int data = 34) {
		data1 = data;

	}
	void display();

};
void Base::display() {
	cout << data1 << endl;
}

class Drived : public Base {
public:
	int id;
	Drived(int id1 = 0) {
		id = id1;
	}

};

int main() {
	Drived harry;
	harry.display();

}