#include <iostream>

int main() {
	using namespace std;

	int number_of_row;
	cout << "Enter number of rows: ";
	cin >> number_of_row;
	for (int i = 0; i < number_of_row; ++i) {
		for (int j = 0; j < number_of_row - i - 1; ++j) {
			cout << '.';
		}
		for (int j = 0; j <= i; ++j) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}
