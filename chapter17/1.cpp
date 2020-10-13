#include <iostream>

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	
	cout << "Enter a sentence with a '$' in it:" << endl;
	int cnt = 0;
	char ch;
	while ((ch = cin.get()) != '$')
		++cnt;
	cin.putback(ch);

	while (cin.get() != '\n')
		continue;

	cout << "There are " << cnt << " characters before $" << endl;

	return 0;
}
