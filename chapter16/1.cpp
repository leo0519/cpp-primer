#include <iostream>

bool palindrome(const std::string &s);

int main() {
	std::string input;
	std::cout << "Enter a word(q to quit): ";
	while(std::getline(std::cin, input) && input != "q") {
		if (palindrome(input))
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
