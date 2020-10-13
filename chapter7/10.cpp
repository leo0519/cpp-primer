#include <iostream>

double add(double x, double y);
double calculate(double x, double y, double (*pf)(double x, double y));

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	double x, y;
	while (cin >> x >> y) {
		cout << calculate(x, y, add) << endl;
	}
	return 0;
}

double add(double x, double y) {
	return x + y;
}

double calculate(double x, double y, double (*pf)(double x, double y)) {
	return (*pf)(x, y);
}
