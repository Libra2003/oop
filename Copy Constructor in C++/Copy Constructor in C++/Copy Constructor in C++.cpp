#include<iostream>
using namespace std;

class Number {
	int a;
public:
	Number() 
	{
		a = 0;
		cout << "Default constructor is called " << endl;

	}
	Number(int num );
	Number(Number& obj);
	void display();
};
Number::Number(int num ) {
	a = num;
	cout << "other constructor is called " << endl;

}
Number::Number(Number &obj) {
	a = obj.a;
	cout << "Copy constructor is called " << endl;

}
void Number::display() {
	cout << "The number for this object is " << a << endl;
}

int main() {
	Number x, y, z(45);
	x.display();
	y.display();
	z.display();
	Number z1 = z;
	z1.display();
	Number z2(x);
	z2.display();

}