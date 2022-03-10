#include<iostream>
using namespace std;

class Shape {
public:
	virtual void display() = 0;

};

class Triangle: public Shape {
	void display() {
		cout << "Triangle is called" << endl;
	}
};

class Circle: public Shape {
	void display() {
		cout << "Circle is called" << endl;
	}
};

class Box:virtual public Shape {
	void display() {
		cout << "Square is called" << endl;
	}


};

int option;
int main() {
	Shape* ptr ;
	Triangle tri;
	Circle cir;
	Box sq;

	cout << "Enter 1 or 2 or else: ";
	cin >> option;
	if (option == 1)
		ptr = &tri;
	else if (option == 2)
		ptr = &cir;
	else
		ptr = &sq;

	ptr->display();

	system("pause");
	return 0;
}