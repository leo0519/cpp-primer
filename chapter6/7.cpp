#include <iostream>
#include <cctype>

int main() {
	using namespace std;

	char buf[32];
	int vowel = 0, conson = 0, other = 0;
	cout << "Enter words (q to quit):" << endl;
	while (cin >> buf) {
		if (buf[0] == 'q' && buf[1] == '\0')
			break;
		else if (isalpha(buf[0])) {
			if (buf[0] == 'a' || buf[0] == 'e' || buf[0] == 'i' || buf[0] == 'o' || buf[0] == 'u')
				++vowel;
			else
				++conson;
		}
		else
			++other;
	}
	cout << vowel << " words beginning with vowels" << endl;
	cout << conson << " words beginning with consonants" << endl;
	cout << other << " others" << endl;

	return 0;
}
