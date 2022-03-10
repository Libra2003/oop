#include<iostream>
using namespace std;

class Employee {
public:
	int id;
	float salary;
	Employee(int idp = 0, float salary1 = 0);

};
Employee::Employee(int id1, float salary1 ) {
	id = 15;
	salary = salary1;
	salary = 34.4;
}

class Programmer : public Employee {
public:
	int languageCode = 9;
	Programmer(int langaugeCode1 );
};
Programmer::Programmer(int langaugeCode1 ) {
	id = 34;
	languageCode = languageCode;
}
int main() {
	Employee harry(1), zain(2);
	
	cout << "Salaries "<< endl <<harry.salary << endl;
	cout << zain.salary << endl;
	cout << zain.id << endl;
	Programmer skillf(10);
	cout <<"skillF language "<< skillf.languageCode << endl;
	cout <<"SkillF id " << skillf.id << endl;
	skillf = harry;
	return 0;

}