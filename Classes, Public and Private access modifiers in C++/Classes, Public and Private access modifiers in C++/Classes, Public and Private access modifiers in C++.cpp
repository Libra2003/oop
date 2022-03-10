#include<iostream>
using namespace std;

class Animal 
{
		int a, b, c;
	public:
		int d, e;
		void setData(int aa, int bb, int cc);
		void getData();
		void setData1(Animal dog1[3]);
		void getData1();


};
void Animal::setData(int aa, int bb, int cc){
	a = aa;
	b = bb;
	c = cc;

}
void Animal::getData()
{
	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << b << endl;
	cout << "The value of c is " << c << endl;
	cout << "The value of d is " << d << endl;
}

Animal dog1[30];
void setData1(Animal dog1[3]);
void getDat1();

int main() {
	Animal dog, cat;
	dog.e = 45;
	dog.setData(3,5,8);
	cat.setData(12, 23, 34);
	cat.getData();
	dog.getData();
	for (int i = 0; i < 5; i++) {
		cin >> dog1[i].d ;
	}
	for (int i = 0; i < 5; i++) {
		cout << dog1[i].d;
		cout << endl;
	}
	return 0;


}