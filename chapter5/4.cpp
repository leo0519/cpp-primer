#include <iostream>

int main() {
	using namespace std;

	double daphne = 100, cleo = 100;
	for (int i = 0; cleo <= daphne; ++i) {
		daphne += 10;
		cleo *= 1.05;
	}
	cout << "Daphne has " << daphne << endl;
	cout << "Cleo has " << cleo << endl;

	return 0;
}
