#include<iostream>
using namespace std;

typedef struct student {
	/*Data*/
	int regNo;
	double CGPA;
	string name, email;

} ep;
student stds[30];
typedef union money {
	int car;
	float rice;
	char pound;
} mo;

typedef enum meal{breakfast, lunch, Dinner} me;
void enum1() {
	enum meal m1;
	me lunch;
	cout << breakfast << endl;
	cout << lunch << endl;
	cout << Dinner << endl;
	m1 = lunch;
	cout <<"Breakfast "<< m1 <<endl;
	cout <<"Dinner "<< (m1 == 2)<<endl;
	cout <<"lunch "<< m1 - 1
		<<endl;
}
void structure() {
	struct student zain;
	ep harry;
	zain.regNo = 4293;
	zain.name = "Tayyab Zain";
	zain.CGPA = 3.0;
	zain.email = "Zaint2755@gmail.com";
	harry.regNo = 4444;
	harry.name = "Code with Harry";
	harry.email = "asdf";
	harry.CGPA = 4.1;
	cout << zain.regNo << endl;
	cout << zain.name << endl;
	cout << zain.CGPA << endl;
	cout << zain.email << endl;
	cout << harry.regNo << endl;
	cout << harry.name << endl;
	cout << harry.CGPA << endl;
	cout << harry.email << endl;
}

void union1() {
	union money m1;
	mo m2;
	m2.car = 35;
	m1.car = 23;
	m1.pound = '34';
	m1.rice = 45.7;
	cout << m1.car << endl;
	cout << m1.pound << endl;
	cout << m1.rice << endl;
}
int main() {
	structure();
	union1();
	enum1();
	
	system("pause");
	return 0;

}
