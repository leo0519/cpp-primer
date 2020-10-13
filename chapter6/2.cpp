#include <iostream>

const int max_donation = 10;

int main() {
	using namespace std;

	double donations[max_donation];
	double avg = 0;
	int n_donation = 0;
	int cnt_larger = 0;
	while (n_donation < max_donation && cin >> donations[n_donation]) {
		avg += donations[n_donation];
		++n_donation;
	}
	avg /= n_donation;
	cout << "Average: " << avg << endl;
	for (int i = 0; i < n_donation; ++i) {
		if (donations[i] > avg)
			++cnt_larger;
	}
	cout << "# of numbers larger than the average: " << cnt_larger << endl;

	return 0;
}
