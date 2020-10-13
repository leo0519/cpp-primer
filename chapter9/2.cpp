#include <iostream>
using std::string;

void strcount(const string str);

int main() {
	using std::cin;
	using std::cout;
	string input;
	char next;
	cout << "Enter a line:\n";
	getline(cin, input);
	while (input != "") {
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const string str) {
	using std::cout;
	static int total = 0;
	int count = str.size();
	cout << "\"" << str << "\" countains ";
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
