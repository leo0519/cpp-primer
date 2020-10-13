#include <iostream>
#include <fstream>

int main() {
	using namespace std;

	char fn[32];
	char ch;
	int count = 0;
	cout << "Enter the filename: ";
	cin >> fn;
	ifstream file(fn);
	while (file >> ch) {
		++count;
	}
	cout << "There are " << count << " characters in file " << fn << endl;

	return 0;
}
