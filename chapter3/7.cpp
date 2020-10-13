#include <iostream>

const double miles_per_km = 62.14 / 100;
const double liters_per_gallon = 3.875;

int main() {
	using namespace std;

	double consumption;
	cout << "Enter an automobile gasoline consumption figure in the European style: ";
	cin >> consumption;
	cout << "Your automobile gasoline consumption figure in U.S. approach is ";
	cout << consumption / liters_per_gallon / miles_per_km;

	return 0;
}
