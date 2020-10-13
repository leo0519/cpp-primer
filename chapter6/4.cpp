#include <iostream>

const int strsize = 64;
const int arsize = 32;

struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main() {
	using namespace std;

	bop bops[arsize];
	char choice;
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name    b. display by title" << endl;
	cout << "c. display by bopname d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	while (choice != 'q') {
		switch (choice) {
			case 'a':
				for (int i = 0; i < arsize; ++i) {
					cout << bops[i].fullname << endl;
				}
				break;
			case 'b':
				for (int i = 0; i < arsize; ++i) {
					cout << bops[i].title << endl;
				}
				break;
			case 'c':
				for (int i = 0; i < arsize; ++i) {
					cout << bops[i].bopname << endl;
				}
				break;
			case 'd':
				break;
			default:
				break;
		}
		cout << "Next choice: ";
		cin >> choice;
	}
	cout << "Bye!" << endl;

	return 0;
}
