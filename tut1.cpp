#include<iostream>
#include<string>
using namespace std;

struct student {

	int regNo;
	string name;
	float CGPA;

};


int main()
{
	student std1, std2, std3;

	// student 1
	std1;
	cout << "Enter the reg no of student 1: " << endl;
	cin >> std1.regNo;

	cout << "Enter the name of student 1: " << endl;
	getline(cin, std1.name);
	cout << "Name of std1: " << std1.name;
	cin.ignore();

	cout << "Enter the CGPA of student 1: " << endl;
	cin >> std1.CGPA;

	system("PAUSE");
	return 0;


}