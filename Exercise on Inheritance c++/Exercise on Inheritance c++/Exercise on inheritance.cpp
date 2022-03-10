#include<iostream>
using namespace std;

class SintificCalculator;
class SimpleCalculator {
	int num1;
	int num2;
	int plus, minus, multi, div;

public:
	SimpleCalculator(int numA = 0, int numB = 0);
	void setNum(int, int);
	void getResult();

	friend class SintificCalculator;
};

SimpleCalculator::SimpleCalculator(int numA, int numB) {
	num1 = numA;
	num2 = numB;
}
void SimpleCalculator::setNum(int a, int b) {
	plus = a + b;
	minus = a - b;
	multi = a * b;
	div = a / b;



}

void SimpleCalculator::getResult() {
	cout << "Simple Calculator " << endl;
	cout << "Num1 + Num2 = " << plus << endl;
	cout << "Num1 - Num2 = " << minus << endl;
	cout << "Num1 * Num2 = " << multi << endl;
	cout << "Num1 / Num2 = " << div << endl;

}

class SintificCalculator {
protected:
	int Num1, Num2;
	int plus, minus, multi, div;
	char oper;
public:
	SintificCalculator(int NumA1 = 0, int NumA2 = 0);
	void setCalc(int, int);
	void displayCalc();


};

SintificCalculator::SintificCalculator(int NumA1, int NumA2) {
	Num1 = NumA1;
	Num2 = NumA2;
}

void SintificCalculator::setCalc(int a, int b) {
	cout << "What function do you want to perform?" << endl;
	cout << "+\n-\n*\n/" << endl;
	cin >> oper;
	if (oper == '+') {
		plus = a + b;
	}
	else if(oper == '-') {
		minus = a - b;
	}
	else if(oper == '*') {
		multi = a * b;

	}

	else if (oper == '/') {
		div = a / b;

	}
	
}

void SintificCalculator::displayCalc() {
	
	cout << "Sintific Calculator " << endl;
	if (oper == '+') {
		cout << "Num1 + Num2 = " << plus << endl;
		
	}
	else if (oper == '-') {
		cout << "Num1 - Num2 = " << minus << endl;

	}
	else if (oper == '*') {
		cout << "Num1 * Num2 = " << multi << endl;
	}

	else if (oper == '/') {
		cout << "Num1 / Num2 = " << div << endl;

	}
}

class HybridCalc : public SimpleCalculator, public SintificCalculator {


};



int main() {
	int x1, y1, x2, y2;
	HybridCalc result;
	cout << "Enter two Numbers for simple Calculator : " << endl;
	cin >> x1 >> y1;
	result.setNum(x1, y1);
	cout << "Enter two Numbers for Sintific Calculator : " << endl;
	cin >> x2 >> y2;
	result.setCalc(x2, y2);
	result.getResult();
	result.displayCalc();


}