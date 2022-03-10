#include<iostream>
using namespace std;

template<class T>
class Vector {
public:
	T* arr;
	T size;
	Vector(int m) {
		size = m;
		arr = new T[m];
	}

	T dotProduct(Vector &v) {
		T d = 0;
		for (int i = 0; i < size; i++) {
			d += this->arr[i] * v.arr[i];
		}
		return d;

	}



};

int main() {

	//Vector 1
	Vector<float> v1(3);
	v1.arr[0] = 3.7;
	v1.arr[1] = 4.5;
	v1.arr[2] = 6.2;
	Vector<float> v2(3);
	v2.arr[0] = 2.1;
	v2.arr[1] = 12.3;
	v2.arr[2] = 3.4;
	float a = v1.dotProduct(v2);
	cout << a << endl;


	system("pause");
	return 0;
}