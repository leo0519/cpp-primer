#include <iostream>

const int YEARS = 3;
const int MONTHS = 12;

int main() {
	using namespace std;

	int sales[YEARS][MONTHS];
	int sum;
	for (int i = 0; i < YEARS; ++i) {
		for (int j = 0; j < MONTHS; ++j) {
			cout << "Enter the sales of " << j + 1 << "-th months in " << i + 1 << "-th year: ";
			cin >> sales[i][j];
		}
	}
	for (int i = 0; i < YEARS; ++i) {
		sum = 0;
		for (int j = 0; j < MONTHS; ++j) {
			sum += sales[i][j];
		}
		cout << "Total sales in " << i + 1 << "-th year is " << sum << endl;
	}
	for (int i = 0; i < MONTHS; ++i) {
		sum = 0;
		for (int j = 0; j < YEARS; ++j) {
			sum += sales[j][i];
		}
		cout << "Total sales in " << i + 1 << "-th month is " << sum << endl;
	}

	return 0;
}
