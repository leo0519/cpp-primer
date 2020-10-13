#include <iostream>
#include <string>

int main() {
	using namespace std;

	int word_count = 0;
	string buffer;
	cout << "Enter the words (to stop, type the word done):" << endl;
	do {
		cin >> buffer;
		word_count++;
	} while (buffer != "done");
	cout << "You entered a total of " << word_count - 1 << " words." << endl;

	return 0;
}
