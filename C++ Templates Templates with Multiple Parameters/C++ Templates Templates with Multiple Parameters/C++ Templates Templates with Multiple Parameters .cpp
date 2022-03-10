#include<iostream>
using namespace std;

template<class T1, class T2, class T3 >
class myclass {
protected:
	T1 data1;
	T2 data2;
	T3 data3;
	

public:
	myclass(T1 a, T2 b, T3 c) {
		data1 = a;
		data2 = b;
		data3 = c;

	}

	virtual void display() {
		cout << this->data1 << endl << this->data2 << endl;
		cout << this->data3 << endl;
	}
};


int main() {
	myclass<char, float, int>obj('c', 34.4, 4);
	obj.display();

	system("pause");
	return 0;
}