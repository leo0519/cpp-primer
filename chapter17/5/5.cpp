#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	using namespace std;

	ifstream fin1("mat.dat", ios_base::in);
	ifstream fin2("pat.dat", ios_base::in);
	if (!fin1 || !fin2) {
		cout << "Cannot open mat.dat or pat.dat" << endl;
		exit(EXIT_FAILURE);
	}
	string name;
	vector<string> friends;
	while (fin1 >> name)
		friends.push_back(name);
	while (fin2 >> name)
		friends.push_back(name);
	fin1.close();
	fin2.close();

	sort(friends.begin(), friends.end());
	auto uni_end = unique(friends.begin(), friends.end());

	ofstream fout("matnpat.dat", ios_base::out);
	if (!fout) {
		cout << "Cannot open matnpat.dat" << endl;
		exit(EXIT_FAILURE);
	}
	for (auto it = friends.begin(); it != uni_end; ++it)
		fout << *it << endl;
	fout.close();

	return 0;
}
