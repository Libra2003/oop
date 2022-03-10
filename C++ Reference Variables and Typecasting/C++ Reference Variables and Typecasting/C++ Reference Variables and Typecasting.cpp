#include<iostream>
using namespace std;

int main() {

	int a = 1;
	float b = 34.4F;
	long double d = 34.4l;

	cout << "doble: " << sizeof(34.4) << endl;
	cout << "Float: " << sizeof(34.4f) << endl;
	cout << "Float: " << sizeof(34.4F) << endl;
	cout << "long doble: " << sizeof(34.4l) << endl;
	cout << "long double: " << sizeof(34.4L) << endl;
	cout << "int: " << sizeof(a) << endl;


	cout << "Refrence Variables";
	float x = 56.2;
	float& y = x;
	cout << endl;
	cout << x;
	cout << endl;
	cout << y;
	cout << endl;
	cout << "Type Casting" << endl;
	int j = 45.49;
	float t = 45.291;

	cout << "The value of j + t is " << j + t << endl;
	cout << "The value of double j is " << (double)j << endl;
	cout << "The value of float t is " << float(t) << endl;
	cout << "The value of int t is " << (int)t << endl;
	cout << "The value of int j is " << int(j) << endl;
	int c = float(j);
	cout << "The expression is: "<< c + t << endl;
	cout << "The expression is: " << (int)t + int(j) << endl;
	cout << "The expression is: " << int(t) + float(j) << endl;
	cout << "The expression is: " << float(t) + float(j) << endl;


	return 0;
}