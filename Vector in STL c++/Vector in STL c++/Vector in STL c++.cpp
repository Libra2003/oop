#include<iostream>
#include<vector>
using namespace std;

vector<int> v1;
int element, size;
	void displayData(vector<int> &v) {
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " " << endl;
		}
	}


int main() {
	int Size;
	vector<int> v1;
	cout << "Enter the size of your vector" << endl;
	cin >> Size;

	for (int i = 0; i < Size; i++)
	{
		cout << "Enter an element to add to this vector: ";
		cin >> element;
		v1.push_back(element);
	}
	displayData(v1);

	system("pause");
	return 0;
}