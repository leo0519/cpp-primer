#include <iostream>

struct CandyBar {
	std::string name;
	double weight;
	int number_of_calory;
};

void show_candybar(CandyBar snack);

int main() {
	CandyBar snack[3] = {
		{
			"Mocha Munch",
			2.3,
			350
		},
		{
			"Mocha Bunch",
			2.5,
			250
		},
		{
			"Mocha Lunch",
			2.2,
			110
		},
	};
	show_candybar(snack[0]);
	show_candybar(snack[1]);
	show_candybar(snack[2]);
	return 0;
}

void show_candybar(CandyBar snack) {
	using namespace std;
	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Number of calories: " << snack.number_of_calory << endl;
}
