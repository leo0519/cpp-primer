#include <iostream>
#include <array>

const int Arsize = 101;

int main() {
	using namespace std;

	array<long double, Arsize> factorials;
	factorials[0] = factorials[1] = 1.0;
	for (int i = 2; i < Arsize; ++i) {
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < Arsize; ++i) {
		cout << i << "! = " << factorials[i] << endl;
	}

	return 0;
}
