#include <iostream>

int main() {
	using namespace std;

	long popul_world, popul_us;
	cout << "Enter the world's population: ";
	cin >> popul_world;
	cout << "Enter the population of the US: ";
	cin >> popul_us;
	cout << "The population of the US is ";
	cout << (double)popul_us / popul_world * 100;
	cout << " \% of the world population." << endl;

	return 0;
}
