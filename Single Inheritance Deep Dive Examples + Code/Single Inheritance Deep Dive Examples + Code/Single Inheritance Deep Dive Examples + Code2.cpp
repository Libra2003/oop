#include<iostream>
using namespace std;

//Base Class
class Base {
	int data1;
public:
	int data2;
	Base(int data = 0, int dataa2 = 0);
	void setData1();
	int getData1();
	int getData2();
};

Base::Base(int data, int dataa2) {
	data1 = data;
	data2 = dataa2;

}
void Base::setData1() {
	data1 = 30;
	data2 = 20;
	cout << "Set data" << endl;
	cout << data1 << endl;
	cout << data2 << endl;
}

int Base::getData1() {
	return data1;
}

int Base::getData2() {
	return data2;
}

//Drived Class
class Drived : public Base {
	int data3;
public:
	Drived(int dataa = 0);
	void process();
	void display();
};

Drived::Drived(int dataa ) {
	data3 = dataa;

}

void Drived::process() {

	data3 = data2 * getData1();
}

void Drived::display() {
	setData1();
	cout << "Value of Data 1 is : " << getData1() << endl;
	cout << "Value of Data 2 is : " << data2 << endl;
	cout << "Value of Data 3 is : " << data3 << endl;
}

int main() {
	Drived der;
	der.setData1();
	der.process();
	der.display();

}