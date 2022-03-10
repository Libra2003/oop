#include<iostream>
using namespace std;

class Base {
protected:
	int a;
private:
	int b;

};

class Drived :public Base {
protected:
	int c;

};

int main() {
	Base a;
	Drived b;
	cout << a.c << endl;

}