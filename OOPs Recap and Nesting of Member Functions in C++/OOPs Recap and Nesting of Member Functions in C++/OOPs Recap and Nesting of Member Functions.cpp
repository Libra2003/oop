#include<iostream>
#include<string>
using namespace std;

class binary {
	string s;
	void chk_bin();
public:
	void read();
	void ones();
	void display();

};
void binary::read() {
	cout << "Enter a binary Number: ";
	cin >> s;
	cout << endl;
}
void binary::chk_bin() {
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) != '0' && s.at(i) != '1') {
			cout << "Incorect binary statement" << endl;
		}
	}
}
void binary::ones() {
	chk_bin();
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == '0') {
			s.at(i) = '1';
		}
		else if (s.at(i) == '1') {
			s.at(i) = '0';
		}

	}
}
void binary::display() {
	for (int i = 0; i < s.length(); i++) {
		cout << s.at(i) ;
		
	}
	cout << endl;
}

int main() {
	binary b;
	b.read();
	// b.chk_bin();
	b.display();
	b.ones();
	b.display();
}