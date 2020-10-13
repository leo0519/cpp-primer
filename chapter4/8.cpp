#include <iostream>

struct Pizza {
	std::string name;
	double diameter;
	double weight;
};

int main() {
	using namespace std;

	Pizza *pizza = new Pizza;
	cout << "Enter the name of pizza: ";
	getline(cin, pizza->name);
	cout << "Enter the weight of pizza: ";
	cin >> pizza->weight;
	cout << "Enter the diameter of pizza: ";
	cin >> pizza->diameter;
	cout << "Name: " << pizza->name << endl;
	cout << "Diameter: " << pizza->diameter << endl;
	cout << "Weight: " << pizza->weight << endl;

	return 0;
}
