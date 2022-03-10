#include<iostream>
using namespace std;

class Complex {
	int a, b;
public:
	Complex() {
		a = 0;
		b = 0;
		cout << "Default Constructor" << endl;
	}

	Complex(int a1 ) {
		a = a1;
		cout << "First parameter" << endl;
	}
	Complex(int a1 , int b1 ) {
		a = a1;
		b = b1;
		cout << "2 parameter" << endl;
	}
	void Construct();
};
void Complex::Construct() {
	cout << "Da" << endl;
}
int main() {
	Complex c1;
	c1.Construct();
	Complex c2(3);
	c2.Construct();
	Complex c3(6, 7);
	c3.Construct();
	Complex c4(1);
	c4.Construct();

}