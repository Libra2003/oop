#include<iostream>
using namespace std;

class Distance {
	int x, y;
public:
	Distance(int x1 = 0, int y1 = 0);
	friend void pointDistance(Distance d1, Distance d2);
};
Distance::Distance(int x1, int y1) {
	x = x1;
	y = y1;
}
void pointDistance(Distance d1, Distance d2) {
	int a, b;
	a = d2.x - d1.x;
	int result1 = pow(a, 2);
	b = d2.y - d1.y;
	int result2 = pow(b, 2);
	int result3 = result1 + result2;
	cout << sqrt(result3) << endl;
	
}

int main() {
	Distance d1, d2;
	pointDistance(d1, d2);


}
