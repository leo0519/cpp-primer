#include <iostream>
#include "wine.h"

Wine::Wine() : name("none"), data(ArrayInt(0), ArrayInt(0)) {}

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : name(l), years(y) {
	data.first() = ArrayInt(yr, y);
	data.second() = ArrayInt(bot, y);
}

Wine::Wine(const char *l, int y) : name(l), years(y) {
	data.first() = ArrayInt(y);
	data.second() = ArrayInt(y);
}

void Wine::GetBottles() {
	using std::cout;
	using std::cin;
	for (int i = 0; i < years; ++i) {
		cout << "Enter year: ";
		cin >> data.first()[i];
		cout << "Enter bottles for that year: ";
		cin >> data.second()[i];
	}
}

int Wine::sum() const {
	return data.second().sum();
}

void Wine::Show() const {
	using std::cout;
	using std::endl;
	cout << "Wine: " << name << endl;
	cout << "        Year    Bottles" << endl;
	for (int i = 0; i < years; ++i) {
		cout << "        " << data.first()[i] << "    " << data.second()[i] << endl;
	}
}
