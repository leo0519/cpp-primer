#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main() {
	double x, y, z;
	std::cout << "Enter two numbers: ";
	while (std::cin >> x >> y) {
		try {
			z = hmean(x, y);
			std::cout << "Harmonic mean of " << x << " and " << y;
			std::cout << " is " << z << "\n";
			std::cout << "Geometric mean of " << x << " and " << y;
			std::cout << " is " << gmean(x, y) << "\n";
		}
		catch (arg_error &ae) {
			std::cout << ae.mesg();
			std::cout << "Try again.\n";
			continue;
		}
	}
	return 0;
}

double hmean(double a, double b) {
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}
