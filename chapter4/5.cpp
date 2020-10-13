#include <iostream>

struct CandyBar {
	std::string name;
	double weight;
	int number_of_calory;
};

int main() {
	using namespace std;

	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Number of calories: " << snack.number_of_calory << endl;

	return 0;
}
