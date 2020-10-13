#include <iostream>

struct car {
	std::string make;
	int built_year;
};

int main() {
	using namespace std;

	int number_car;
	cout << "How many cars do you wish to catalog? ";
	cin >> number_car;
	cin.get();
	car *car_array = new car[number_car];
	for (int i = 0; i < number_car; ++i) {
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, car_array[i].make);
		cout << "Please enter the year made: ";
		cin >> car_array[i].built_year;
		cin.get();
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0; i < number_car; ++i) {
		cout << car_array[i].built_year << " " << car_array[i].make << endl;
	}

	return 0;
}
