#include<iostream>
using namespace std;

template<class T>
class Zain {
protected:
	T data;
public:
	Zain(T a = 0) {
		data = a;
	}
	void setData() {
		data = 34;
	}
	void display();
};
template <class z>
void Zain<z>::display() {
	cout << data << endl;
}

void func(int a) {
	cout << "I am the first function "<< a << endl;
}

template <class Z>
void func1(Z a) {
	cout << "I am the templatize function " << a << endl;
}


//template <class T>
//void func(T a) {
//	cout << "I am the templatize function " << a << endl;
//}

int main() {
	Zain<int> z(23);
	z.display();
	z.setData();
	z.display();

	func(76);
	
	func1(23);
	system("pause");
	return 0;
}