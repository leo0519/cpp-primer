#include <iostream>

const double feet_per_inch = 1.0 / 12;

int main() {
	using namespace std;

	int inch;
	cout << "Enter your height in integer inches: ____\b\b\b\b";
	cin >> inch;
	cout << "Your height in feet is " << inch * feet_per_inch << "." << endl;

	return 0;
}
