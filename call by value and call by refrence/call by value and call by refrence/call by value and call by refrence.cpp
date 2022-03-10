#include<iostream>
using namespace std;

void swap(int a, int b) {

	int temp = a;
	a = b;
	b = temp;


}

// call by refrence using pointers
void pointerSwap(int* a, int* b ) {

	int temp = *a;
	*a = *b;
	*b = temp;

}
// return by refrence
void refrenceVar(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int &refrenceVar1(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	return a;
}

// These adresse will get destroyed as soon as they are done
int main() {
	int a = 9;
	int b = 8;
	int x = 4;
	int y = 5;
	swap(x, y); // This will not swap a and b
	cout << "The value of x is " << x << " and the value of y is " << y << endl ;
	// pointer swaped
	pointerSwap(&x, &y );
	cout << "The value of x is " << x << " and the value of y is " << y << endl;
	// refrence value swaped again
	refrenceVar(x, y);
	cout << "The value of x is " << x << " and the value of y is " << y << endl;
	// Again value swapped
	pointerSwap(&x, &y);
	cout << "The value of x is " << x << " and the value of y is " << y << endl;

	int temp1 = a;
	a = b;
	b = temp1;
	cout << a << endl;
	cout << b << endl;
	// refrence value swaped again
	refrenceVar1(x, y) = 766, 88;
	cout << "The value of x is " << x << " and the value of y is " << y << endl;
	
}