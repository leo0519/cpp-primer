#include <iostream>
#include <cstring>

int main() {
	using namespace std;

	int word_count = 0;
	char buffer[32];
	cout << "Enter the words (to stop, type the word done):" << endl;
	do {
		cin >> buffer;
		word_count++;
	} while (strcmp(buffer, "done") != 0);
	cout << "You entered a total of " << word_count - 1 << " words." << endl;

	return 0;
}
