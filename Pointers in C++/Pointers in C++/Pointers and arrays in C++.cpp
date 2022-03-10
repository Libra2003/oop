#include<iostream>
using namespace std;

int main() {
	// Arrays
	int marks[] = { 23, 45, 67, 78 };
	int marks1[] = { 34, 56, 78, 99 };
	int i = 0;
	int a = 0;
	int* p = marks;
	while (i <= 4) {
		cout << marks[i] << endl;
		i++;
	}
	do
	{
		cout << marks1[a] << endl;
		a++;

	} while (a < 4);
	a = 0;
	// Pointers
	do
	{
		cout << *p<<endl;
		a++;
		*p++;
	} while (a < 4);
}