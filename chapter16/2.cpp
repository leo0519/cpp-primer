#include <iostream>
#include <cctype>

bool palindrome(const std::string &s);
std::string reduce(const std::string &s);

int main() {
	std::string input;
	std::cout << "Enter a word(q to quit): ";
	while(std::getline(std::cin, input) && input != "q") {
		std::string red = reduce(input);
		std::cout << "After reduce: " << red << "\n";
		if (palindrome(red))
			std::cout << input << " is palindrome!\n";
		else
			std::cout << input << " is not palindrome!\n";
	}
	std::cout << "Bye!\n";
	return 0;
}

bool palindrome(const std::string &s) {
	std::string reverse(s.rbegin(), s.rend());
	return s == reverse;
}

std::string reduce(const std::string &s) {
	std::string red;
	for (auto i = s.begin(); i != s.end(); ++i) {
		char ch = *i;
		if (isalpha(ch)) {
			if (isupper(ch))
				ch = tolower(ch);
			red.push_back(ch);
		}
	}
	return red;
}
