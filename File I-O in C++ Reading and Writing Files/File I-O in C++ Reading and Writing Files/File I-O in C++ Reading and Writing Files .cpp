#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string st = "Zain";
	//opening the file using constructor

	//ofstream out("SampleFile.txt");//Write operatio
	//out << st;
	string st2;

	fstream Myfile;
	Myfile.open("Zain.txt", ios::out);
	cout << "Write in the file" << endl;
	if (Myfile.is_open()) {
		for (int i = 0; i < 1; i++) {
			getline(cin, st2);
			Myfile << st2 << endl;
			Myfile.close();
		}
	}
	Myfile.open("Zain.txt", ios::app);
	cout << "Write more in the file" << endl;
	if (Myfile.is_open()) {
		for (int i = 0; i < 2; i++) {
			getline(cin, st2);
			Myfile << st2 << endl;
			Myfile.close();
		}
	}
	Myfile.open("Zain.txt", ios::in);
	if (Myfile.is_open()) {
		string line;
		while (getline(Myfile, line)) {
			cout << line << endl;
		}
	}
	
	//string st2;
	//cout << "Enter you name" << endl;
	//getline(cin, st2);
	//cout <<"My Name is "<< st2 << endl;
	
	system("pause");
	return 0;
}
class Secdual {
protected:
	string StartPoint;
	string Destinations;
	string EndingPoint;
	int TrainNum;
public:

	void setSecdual(int a, string, string, string);
	void displaySecdual(int);

};


void Secdual::setSecdual(int a, string s1, string d1, string e1) {
	StartPoint = s1;
	Destinations = d1;
	EndingPoint = e1;
	TrainNum = a;

}





int main() {
	int chose = 0;
	int  set;
	int repeat = 1;
	cout << "Are you a custumor or an Administrator?\n1.Administrator\n2.User" << endl;
	cin >> chose;
	if (chose == 1) {
		Admin login;
		login.login();
		cout << "Enter the total number of trains today: ";
		cin >> set;
		Secdual* Train = new Secdual[set];
		Secdual* TrainPtr = Train;

		while (repeat == 1) {

			cout << "Press \n1 For custumoizing secdual\n2 For Seeing the Secdual " << endl;
			cin >> chose;
			if (chose == 1) {

				string S1, D1, E1;

				for (int i = 0; i < set; i++) {
					cout << "Enter the Starting point for Train " << i + 1 << ": " << endl;
					cin >> S1;
					cout << "Enter the total Number for Destinations : ";
					cin >> chose;
					for (int i = 0; i < chose; i++) {
						cout << "Enter the Destination number " << i + 1 << endl;
						cin >> D1;
					}
					cout << "Enter the Ending point: " << endl;
					cin >> E1;
					Train->setSecdual(set, S1, D1, E1);
					Train++;

				}

			}

			else if (chose == 2) {
				for (int i = 0; i < set; i++) {
					TrainPtr->displaySecdual(set);
					TrainPtr++;
				}
			}
			repeat++;
			cout << "Do you want to continue?\nPress 1 for yes\nPress 2 for No" << endl;
			cin >> chose;
			if (chose == 1) {
				repeat--;
			}
			else if (chose == 2) {
				repeat++;
			}
		}


	}

	system("pause");
	return 0;
}