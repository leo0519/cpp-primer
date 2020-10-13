#include <iostream>

double cel2fah(double cel);

int main() {
	using namespace std;

	double cel;
	cout << "Please enter a Celsius value: ";
	cin >> cel;
	cout << cel << " degree Celsius is " << cel2fah(cel);
	cout << " degree Fahrenheit." << endl;

	return 0;
}

double cel2fah(double cel) {
	return 1.8 * cel + 32;
}
