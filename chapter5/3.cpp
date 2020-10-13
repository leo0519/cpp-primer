#include <iostream>

int main() {
	using namespace std;

	int val = -1, sum = 0;
	while(val != 0) {
		cout << "Enter a number: ";
		cin >> val;
		sum += val;
		cout << "Cumulative sum is " << sum << endl;
	}

	return 0;
}
