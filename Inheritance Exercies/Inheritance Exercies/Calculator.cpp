#include<iostream>
using namespace std;

class Calculator {
protected:
	int a, b;
public:
	Calculator(int a1 = 0, int b1 = 0);
	void Cal(int, int);

};
Calculator::Calculator(int a1, int b1) {
	a = a1;
	b = b1;
}
void Calculator::Cal(int x, int y) {

	cout << "x + y = " << x + y << endl;
	cout << "x - y = " << x - y << endl;
	cout << "x * y = " << x * y << endl;
	cout << "x / y = " << x / y << endl;




}



class SintificCalculator :virtual public Calculator {
protected:
	string s;

public:
	void siCalc(int, int);


};
void SintificCalculator::siCalc(int x, int y) {

	cout << "For +         Press +\n" <<
		"For -         Press -\n" <<
		"For *         Press *\n" <<
		"For /         Press /\n";
	cin >> s;
	if (s == "+") {
		cout << "x + y =  " << x + y << endl;

	}
	else if (s == "-") {
		cout << "x - y = " << x - y << endl;
	
	
	}
	else if (s == "*") {

		cout << "x * y = " << x * y << endl;


	}
	else if (s == "/") {

		cout << "x / y = " << x / y << endl;

	}
	else {
		cout << "Wrong input";
	}
		


}

class HyberidCalculator :virtual public Calculator, virtual public SintificCalculator {
	
};

int main() {
	HyberidCalculator calc;
	int s1, s2;
	calc.Cal(45, 12);
	cout << "Enter 2 inputs: ";
	cin >> s1 >> s2;
	calc.siCalc(s1, s2);

	system("pause");
	return 0;
}