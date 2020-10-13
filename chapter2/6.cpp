#include <iostream>

double light2astron(double light_year);

int main() {
	using namespace std;

	double light_year;
	cout << "Enter the number of light years: ";
	cin >> light_year;
	cout << light_year << " light years = " << light2astron(light_year);
	cout << " astronomical units." << endl;

	return 0;
}

double light2astron(double light_year) {
	return 63240 * light_year;
}
