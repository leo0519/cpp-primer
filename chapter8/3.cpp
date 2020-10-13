#include <iostream>
#include <cctype>
using std::string;

string &toupper(string &str);

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	string str;
	cout << "Enter a string (q to quit): ";
	while (getline(cin, str) && str != "q") {
		cout << toupper(str) << endl;
		cout << "Next string (q to quit): ";
	}
	cout << "Bye." << endl;
	return 0;
}

string &toupper(string &str) {
	for (int i = 0; i < str.size(); ++i) {
		if (isalpha(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
	return str;
}
