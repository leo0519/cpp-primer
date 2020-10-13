#include <iostream>

struct CandyBar {
	std::string name;
	double weight;
	int number_of_calory;
};

void show_candybar(CandyBar snack);

int main() {
	CandyBar *snack = new CandyBar[3];
	snack[0].name = "Mocha Munch";
	snack[0].weight = 2.3;
	snack[0].number_of_calory = 350;
	snack[1].name = "Mocha Munch";
	snack[1].weight = 2.3;
	snack[1].number_of_calory = 350;
	snack[2].name = "Mocha Munch";
	snack[2].weight = 2.3;
	snack[2].number_of_calory = 350;
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
