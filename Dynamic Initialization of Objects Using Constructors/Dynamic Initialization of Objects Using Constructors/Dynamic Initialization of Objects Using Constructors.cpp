#include<iostream>
using namespace std;

class Bank {
	int principal, years;
	float interestRate, returnValue;
public:
	Bank(int p = 0, int y = 0, float r = 0);
	Bank(int p , int y , int R );
	void show();
};

Bank::Bank(int p, int y, float r)
{
	principal = p;
	years = y;
	interestRate = r;
	returnValue = principal;
	for (int i = 0; i < y; i++)
	{
		returnValue = returnValue * (1 + interestRate);
	}
	cout << "Constructor 1" << endl;
}


Bank::Bank(int p, int y, int R) {
	principal = p;
	years = y;
	interestRate = float(R)/100;
	returnValue = principal;
	for (int i = 0; i < y; i++) {
		returnValue = returnValue * (1 + interestRate);
	}
	cout << "Constructor 2" << endl;

}

void Bank::show() {
	cout << "\nPrinciple amount is "<<principal << 
		". Return Value after " <<
		years << " is " << returnValue << endl;
}

int main() {
	Bank b1, b2, b3;
	int p, y, R;
	float r;
	cout << "Enter the value of p y and r" << endl;
	cin >> p >> y >> r;
	b1 = Bank(p, y, r);
	b1.show();

	cout << "Enter the value of p y and R" << endl;;
	cin >> p >> y >> R;
	b2 = Bank(p, y, R);
	b2.show();

	return 0;



}