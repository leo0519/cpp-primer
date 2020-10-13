#include <iostream>

double factorial(int x);

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	int x;
	cout << "Enter a number, q for quit:" << endl;
	while (cin >> x) {
		cout << factorial(x) << endl;
	}
	return 0;
}

double factorial(int x) {
	if (x == 0)
		return 1;
	else
		return factorial(x - 1) * x;
}
