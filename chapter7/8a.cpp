#include <iostream>

const int Seasons = 4;
const char *Snames[4] = {"Spring", "Summer", "Autumn", "Fall"};

void fill(double pa[]);
void show(const double da[]);

int main() {
	double expenses[Seasons];
	fill(expenses);
	show(expenses);
}

void fill(double pa[]) {
	using std::cout;
	using std::cin;
	for (int i = 0; i < Seasons; ++i) {
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa[i];
	}
}

void show(const double da[]) {
	using std::cout;
	using std::endl;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; ++i) {
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
