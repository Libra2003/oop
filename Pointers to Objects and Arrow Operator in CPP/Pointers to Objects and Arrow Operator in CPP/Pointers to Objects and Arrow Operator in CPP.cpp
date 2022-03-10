#include<iostream>
using namespace std;

class Complex {
	int real, imaginary;
public:
	Complex(int real1 = 0, int imaginary1 = 0) {
		real1 = real;
		imaginary1 = imaginary;
	}	
	void setData(int x, int y);
	int getData();

	
};

void Complex::setData(int x, int y) {
	real = x;
	imaginary = y;
}
int Complex::getData() {
	cout << real << "\n" << imaginary << endl;
	return(real, imaginary);
}

int main() {
	int a;
	int b;
	int c;
	cin >> a;
	Complex* arr = new Complex[a];
	int* ptr = &a;
	cin >> c;
	cin >> b;
	arr->setData(b,c);
	cout << &a << endl;
	arr->getData();

}