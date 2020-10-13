#include <iostream>
#include <fstream>

struct Contribution {
	std::string name;
	double amount;
};

int main() {
	using namespace std;

	char fn[32];
	cout << "Enter the file name: ";
	cin >> fn;
	ifstream file(fn);
	int ctbSize;
	file >> ctbSize;
	while (file.get() != '\n')
		continue;
	Contribution *ctb = new Contribution[ctbSize];
	for (int i = 0; i < ctbSize; ++i) {
		getline(file, ctb[i].name);
		file >> ctb[i].amount;
		while (file.get() != '\n')
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
