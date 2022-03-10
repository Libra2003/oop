#include<iostream>
using namespace std;



int main() {
	int rows, cols;
	int value, rows1, cols1, repeat = 1, again;
	cout << "Rows: ";
	cin >> rows;
	int** table = new int* [rows];

	for (int i = 0; i < rows; i++) {
		cout << "Enter cols: ";
		cin >> cols;
		table[i] = new int[cols];
	}

	while (repeat == 1) {
		cout << "Enter Rows: ";
		cin >> rows1;
		for (int i = 0; i < rows1; i++) {
			cout << "Enter Cols: ";
			cin >> cols1;
			for (int j = 0; j < cols1; j++) {
				cout << "Enter value: ";
				cin >> value;
				table[i][j] = value;
			}
		}
		repeat++;
		cout << "Try again";
		cin >> again;
		if (again == 1) {
			repeat--;
		}
		else {
			repeat++;
		}
	}

	for (int i = 0; i < rows1; i++) {
	
		for (int j = 0; j < cols1; j++) {
			
			cout<<table[i][j] <<endl;
		}
	}
	system("pause");
	return 0;
}