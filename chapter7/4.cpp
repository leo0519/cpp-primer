#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
	using std::cout;
	using std::endl;
	double total, choices;
	cout << "The probability is ";
	cout << 1 / probability(47, 5) / 27 << endl;
	return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;
}
