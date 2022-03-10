#include<iostream>
using namespace std;

template<class T1 = int, class T2 = char, class T3 = float, class T4 = char>

class Zain {
public:
	T1 a;
	T2 b;
	T2 e;
	T3 c;
	T4 d;
	Zain(T1 x = 0, T2 y = 0, T3 z = 0, T4 w = 0, T2 s = 0) {
		a = x,b = y, c = z;
		d = w, e = s;
	}

	void display() {
		cout << "The value of a is " << a << endl;
		cout << "The value of b is " << b << endl;
		cout << "The value of c is " << c << endl;
		cout << "The value of d is " << d << endl;
		cout << "The value of e is " << e << endl;



	}

};

int main() {
	Zain<> z1(2, 'z', 3.5, 'z', 'zain');
	z1.display();
	system("pause");
	return 0;
}