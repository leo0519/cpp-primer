#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;

vector<int> lotto(int total, int select);

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	const int TOT = 51, SELECT = 6;
	cout << "Play? <y/n>: ";
	std::string choice;
	vector<int> res;
	while (cin >> choice && choice != "n") {
		res = lotto(TOT, SELECT);
		for (auto it = res.begin(); it != res.end(); ++it)
			cout << *it << " ";
		cout << endl;
		cout << "Play again? <y/n>: ";
	}
	cout << "Bye~" << endl;
	return 0;
}

vector<int> lotto(int total, int select) {
	vector<int> all;
	for (int i = 1; i <= total; ++i)
		all.push_back(i);
	random_shuffle(all.begin(), all.end());
	return vector<int>(all.begin(), all.begin() + select);
}
