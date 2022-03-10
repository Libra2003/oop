#include<iostream>
using namespace std;

float funcAveg(int a, int b) {
	float avg = (a + b) / 2;
	return avg;


}

template<class T1, class T2>

float func1(T1 a, T2 b) {
	float avg = (a + b) / 2.0;
	return avg;
}

template <class T>
void swapp(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	float a;
	a = funcAveg(4, 3);
	printf("The average of these number is %.2f", a);
	cout << endl;
	a = func1(3, 5.6);
	printf("The average of these number is %.2f", a);
	cout << endl;
	int d = 3.4, b = 5;
	swapp(d, b);

	system("pause");
	return 0;
}