#include<iostream>
#include"string"
using namespace std;

struct Student 
{
	string name;
	int regNo;
	float CGPA;
};

int main()
{
	Student stds[3];
	int sno;
	

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter Name of Student " << i + 1 << " :";
		cin.ignore();
		getline(cin, stds[i].name);

		cout << "Enter roll number of Student " << i + 1 << " :";
		cin>>stds[i].regNo;

		cout << "Enter CGPA of Student " << i + 1 << " :";
		cin >> stds[i].CGPA;

		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{

		cout << "The name of " << i + 1 << " student is : " << stds[i].name << endl;
		cout << "The reg no of " << i + 1 << " student is : " << stds[i].regNo << endl;
		cout << "The CGPA of " << i + 1 << " student is : " << stds[i].CGPA << endl;

	}

		
	}
	system("pause");
	return 0;
}