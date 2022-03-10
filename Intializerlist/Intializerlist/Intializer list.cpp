#include<iostream>
using namespace std;


/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
	assignment + other code;
}
*/

class Test {
protected:
	int a;
	int b;
public:
	//Test(int i  , int j ) : b(j),a(i + b) {
	//	cout << "Constructer executed" << endl;
	//	cout << "value of a is: " << a << endl;
	//	cout << "value of b is: " << b << endl;
	//}
	Test(int i, int j) : a(i), b(i + a) {
		cout << "Constructer executed" << endl;
		cout << "value of a is: " << a << endl;
		cout << "value of b is: " << b << endl;
	}
};

int main() {
	Test t(3,5);
	


	system("pause");
	return 0;
}