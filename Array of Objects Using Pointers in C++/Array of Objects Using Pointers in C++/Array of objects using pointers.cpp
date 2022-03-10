#include<iostream>
using namespace std;

class Shop {
	int item;
	float price;
public:
	Shop(int item1 = 0, float price1 = 0);
	void setData(int x, int y);
	int getData();
};

Shop::Shop(int item1, float price1 ) {
	item = item1;
	price = price1;
}

void Shop::setData(int x, int y) {
	item = x;
	price = y;


}

int Shop::getData() {
	cout << "The item is: " << item << endl;
	cout << "THe price is: " << price << endl;
	return(item, price);

}


int main() {
	int size;
	cin >> size;
	Shop* ptr = new Shop[size];
	Shop* ptr1 = ptr;
	int i, p, q;
	for (i = 0; i < size; i++) {
		cout << "Enter the id and the price of item:  " <<i+1<< endl;
		cin >> p >> q;
		ptr->setData(p, q);
		ptr++;
	}
	for (i = 0; i < size; i++) {
		cout << " The id and the price of item: " << i + 1 << endl;
		ptr1->getData();
		ptr1++;
	}
	return 0;

}