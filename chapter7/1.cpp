#include <iostream>

double harmonic_mean(double x, double y);

int main() {
	using namespace std;

	double x, y;
	cout << "Enter pairs of numbers: ";
	while (cin >> x >> y) {
		cout << "The harmonic mean of the pair is: ";
		cout << harmonic_mean(x, y) << endl;
		if (x == 0 || y == 0)
			break;
	}

	return 0;
}

double harmonic_mean(double x, double y) {
	return 2 * x * y / (x + y);
}
