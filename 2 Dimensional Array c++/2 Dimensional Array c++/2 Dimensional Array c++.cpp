#include<iostream>
using namespace std;





int rows, colum;

int main() {
	cout << "Enter number of trains: ";
	cin >> rows;
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++) {
		cin >> colum;
		array[i] = new int[colum];

	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; i < colum; i++) {
			cout << array[i][j] << endl;
		}

		
	}
	system("pause");
	return 0;
}