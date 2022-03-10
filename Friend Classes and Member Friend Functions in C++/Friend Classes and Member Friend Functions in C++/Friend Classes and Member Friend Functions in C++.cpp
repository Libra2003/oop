#include<iostream>
using namespace std;

class Calculator;
class Complex;


class Calculator {
public:
	int addReal(Complex , Complex );
	int addComplex(Complex , Complex );

};


class Complex {
	int a, b;
public:
	void setNum(int a1, int b1) {
		a = a1;
		b = b1;
	}
	//friend int Calculator::addReal(Complex, Complex);
	//friend int Calculator::addComplex(Complex, Complex);
	friend class Calculator;
};
int Calculator::addReal(Complex o1, Complex o2) {
	return(o1.a + o2.a);
}
int Calculator::addComplex(Complex o1, Complex o2) {
	return(o1.b + o2.b);
}
int main()
{
	Complex o1, o2;
	o1.setNum(1, 4);
	o2.setNum(5, 7);
	Calculator calc;
	
	cout << "The sum of real part of o1 and o2 is " << 
		calc.addReal(o1, o2) << endl;
	cout << "The sum of complex part of o1 and o2 is " 
		<< calc.addComplex(o1, o2) << endl;
	return 0;
}
