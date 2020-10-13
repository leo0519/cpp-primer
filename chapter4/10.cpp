#include <iostream>
#include <array>

const int ArSize = 3;

int main() {
	using namespace std;

	array<double, ArSize> dash_record;
	double avg = 0.0;
	for (int i = 0; i < ArSize; ++i) {
		cout << "Enter " << i + 1 << "-th 40-yd dash: ";
		cin >> dash_record[i];
	}
	for (int i = 0; i < ArSize; ++i) {
		cout << "The " << i + 1 << "-th 40-yd dash takes ";
		cout << dash_record[i] << endl;
		avg += dash_record[i];
	}
	cout << "Average time: " << avg / 3 << endl;

	return 0;
}
