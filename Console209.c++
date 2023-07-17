#include <iostream>
using namespace std;
int main() {
	int k, c;
	double x1 = 0.1, x2 = 1, x3 = 5, y1, y2, y3;
	cin >> k >> c;
	y1 = k * x1 + c;
	y2 = k * x2 + c;
	y3 = k * x3 + c;
	cout << "x = 0.1 : y = " << y1 << endl << "x = 1 : y = " << y2 << endl << "x = 5 : y = " << y3;
	return 0;
}