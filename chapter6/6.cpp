#include <iostream>

struct Contribution {
	std::string name;
	double amount;
};

int main() {
	using namespace std;

	int ctbSize;
	cout << "Enter the number of contributors: ";
	cin >> ctbSize;
	while (cin.get() != '\n')
		continue;
	Contribution *ctb = new Contribution[ctbSize];
	for (int i = 0; i < ctbSize; ++i) {
		cout << i + 1 << "-th contributor:" << endl;
		cout << "Enter the name: ";
		getline(cin, ctb[i].name);
		cout << "Enter the amount: ";
		cin >> ctb[i].amount;
		while (cin.get() != '\n')
			continue;
	}
	cout << "Grand Patrons" << endl;
	for (int i = 0; i < ctbSize; ++i) {
		if (ctb[i].amount >= 10000)
			cout << ctb[i].name << endl;
	}
	cout << endl << "Patrons" << endl;
	for (int i = 0; i < ctbSize; ++i) {
		if (ctb[i].amount < 10000)
			cout << ctb[i].name << endl;
	}
	delete [] ctb;

	return 0;
}
