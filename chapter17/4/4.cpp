#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main() {
	using namespace std;

	ifstream fin1("in1", ios_base::in);
	ifstream fin2("in2", ios_base::in);
	if (!fin1 || !fin2) {
		cerr << "Failed to open in1 or in2" << endl;
		exit(EXIT_FAILURE);
	}

	ofstream fout("out", ios_base::out);
	if (!fout) {
		cerr << "Failed to open out" << endl;
		exit(EXIT_FAILURE);
	}

	string str1, str2;
	while (getline(fin1, str1) && getline(fin2, str2))
		fout << str1 << " " << str2 << endl;
	if (fin1) {
		fout << str1 << endl;
		while (getline(fin1, str1))
			fout << str1 << endl;
	}
	else if (fin2) {
		fout << str2 << endl;
		while (getline(fin2, str2))
			fout << str2 << endl;
	}

	cout << "Concatenate successfully." << endl;

	return 0;
}
