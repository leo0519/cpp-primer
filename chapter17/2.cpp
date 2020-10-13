#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	using std::ofstream;

	cout << "Enter filename: ";
	char fn[20];
	cin.getline(fn, 20);
	ofstream fout;
	fout.open(fn, std::ios_base::out);

	cout << "Enter something:" << endl;
	char ch;
	while (cin.get(ch))
		fout.put(ch);
	if (cin.eof())
		cout << "\nIt is EOF" << endl;
	else {
		std::cerr << "Unknown error" << endl;
		exit(EXIT_FAILURE);
	}
	fout.close();
	return 0;
}
