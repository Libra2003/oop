#include<iostream>
using namespace std;

int main() {

	int a;
	/*int* ptr = &a;
	cout << *(ptr) << endl;*/

	//Key word
	cin >> a;
	int b;
	int* arr = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> b;
		arr[i] = b;
		
	}
	for (int i = 0; i < a; i++) {
		cout << "The value of " << i << " is " << arr[i] << endl;
	}
}