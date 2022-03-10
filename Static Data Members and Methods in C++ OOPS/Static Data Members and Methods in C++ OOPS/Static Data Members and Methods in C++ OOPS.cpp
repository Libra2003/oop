#include<iostream>
using namespace std;

class Employee {
	int id;
	static int count;
public:
	void setData(void);
	int getData();
	static void setStatic() {
		cout << "Count Number: " << count+1 << endl;
		count++;
	}

};


int Employee::count;

void Employee::setData() {

	cout << "Enter id of student " << " OF " << count+1 << endl;
	cin >> id;

}

int Employee::getData() {
	cout << "The id of student " << count+1 <<" is "<< id << endl;
	return(id, count);
}


int main() {
	Employee Zain, Harry, Hanzla;
	Zain.setData();
	Zain.getData();
	Employee::setStatic();
	Harry.setData();
	Harry.getData();
	Employee::setStatic();
	Hanzla.setData();
	Hanzla.getData();
	Employee::setStatic();
}