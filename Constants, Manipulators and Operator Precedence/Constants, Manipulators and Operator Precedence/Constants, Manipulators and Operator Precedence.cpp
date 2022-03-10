#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	int a = 45;
	cout << "The value of a is: " << a;
	cout << endl;
	a = 34;
	cout << "The value of a is: " << a;
	cout << endl;
	const int b = 24;
	cout << "The value of b is: " << b;
	cout << endl;
	cout << "The value of b is: " << b;
	cout << endl;

	//Maniuplators in c++
	cout << "Maniuplators in c++"<<endl;

	cout << "The value of b : " << setw(4) << b << setw(10)<< a << endl;
	cout << "The value of c : " << setw(10) << a <<endl;

	// Operator precedence
	cout << "Operator precedence" << endl;
	int x = 3, y = 55;

	int c = x * (5 + y);
	int d = (((x * 5) + y) - (45 + (87/5)));
	cout << d << endl;
	cout << c;



}