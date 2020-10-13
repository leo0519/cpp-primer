#include <iostream>
#include "wine.h"

Wine::Wine(const char *l, int y, const int yr[], const int bot[])
	: name(l), years(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char *l, int y)
	: name(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}

void Wine::GetBottles() {
	using std::cout;
	using std::cin;
	for (int i = 0; i < years; ++i) {
		cout << "Enter year: ";
		cin >> PairArray::first()[i];
		cout << "Enter bottles for that year: ";
		cin >> PairArray::second()[i];
	}
}

string &Wine::Label() {
	return name;
}

int Wine::sum() const {
	return PairArray::second().sum();
}

void Wine::Show() const {
	using std::cout;
	using std::endl;
	cout << "Wine: " << name << endl;
	cout << "        Year    Bottles" << endl;
	for (int i = 0; i < years; ++i) {
		cout << "        " << PairArray::first()[i] << "    " << PairArray::second()[i] << endl;
	}
}
