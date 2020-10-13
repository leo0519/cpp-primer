#include <iostream>

int main() {
	using namespace std;

	double amt;
	double tax;
	cout << "Enter the solicit incomes: ";
	while (cin >> amt && amt >= 0) {
		if (amt <= 5000)
			tax = 0.0;
		else if (amt > 5000 && amt <= 15000) {
			tax = (amt - 5000) * 0.1;
		}
		else if (amt > 15000 && amt <= 35000) {
			tax = (amt - 15000) * 0.15 + 1000;
		}
		else if (amt > 35000) {
			tax = (amt - 35000) * 0.2 + 1000 + 3000;
		}
		cout << "You tax owed is " << tax << endl;
		cout << "Enter the solicit incomes: ";
	}

	return 0;
}
