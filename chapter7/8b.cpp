#include <iostream>

const int Seasons = 4;
const char *Snames[4] = {"Spring", "Summer", "Autumn", "Fall"};

struct SeasonExpense {
	double expense[Seasons];
};

void fill(SeasonExpense *x);
void show(const SeasonExpense x);

int main() {
	SeasonExpense x;
	fill(&x);
	show(x);
}

void fill(SeasonExpense *x) {
	using std::cout;
	using std::cin;
	for (int i = 0; i < Seasons; ++i) {
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> x->expense[i];
	}
}

void show(const SeasonExpense x) {
	using std::cout;
	using std::endl;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; ++i) {
		cout << Snames[i] << ": $" << x.expense[i] << endl;
		total += x.expense[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
