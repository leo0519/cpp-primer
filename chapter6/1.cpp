#include <iostream>
#include <cctype>

int main() {
	using namespace std;

	char buffer;
	cin.get(buffer);
	while (buffer != '@') {
		if (isdigit(buffer))
			continue;
		if (isalpha(buffer))
			buffer = tolower(buffer);
		cout << buffer;
		cin.get(buffer);
	}

	return 0;
}
