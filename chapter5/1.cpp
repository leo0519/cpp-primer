#include <iostream>

int main() {
	using namespace std;

	int sum, first, second;
	cout << "Enter the first integer: ";
	cin >> first;
	cout << "Enter the second integer: ";
	cin >> second;
	for (int i = first; i <= second; ++i) {
		sum += i;
	}
	cout << "The sum of all the integers between and including the two integers is ";
	cout << sum << endl;

	return 0;
}
