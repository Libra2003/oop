#include<iostream>
using namespace std;

class student {
protected:
	int roll_num;
public:
	void set_roll_num(int);
	int get_roll_num();

};
void student::set_roll_num(int r) {
	roll_num = r;
}
int student::get_roll_num() {
	cout << "The roll number is: " << roll_num << endl;
	return roll_num;
}
class Exam : public student {
protected:
	float maths;
	float physics;
public:
	void set_marks(float, float);
	int get_marks();

};
void Exam::set_marks(float m1, float m2) {
	maths = m1;
	physics = m2;
}

int Exam::get_marks() {
	cout << "Math marks: " << maths << endl;
	cout << "Pyhsics Marks: " << physics << endl;
	
	return(maths, physics);
}

class Result : public Exam {
	float percentage;
public:
	void display();
};
void Result::display() {
	get_roll_num();
	get_marks();
	cout << "Your percentage is: " << (maths + physics) / 2 << endl;
}
int main() {
	Result zain;
	zain.set_roll_num(4293);
	zain.get_roll_num();
	
	zain.set_marks(99, 95);
	zain.get_marks();

	zain.display();
}