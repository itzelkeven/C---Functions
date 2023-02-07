#include <iostream>
using namespace std;
void area(float r);
int main() {
	float r;
	cout << "Enter Radius of Circle" << endl;
	cin >> r;
	area(r);
}

void area(float r) {
	const float pi = 3.14159;
	float area;
	area = ((pi) * (r * r));
	cout << "The area of the circle is:" << area << endl;
}
