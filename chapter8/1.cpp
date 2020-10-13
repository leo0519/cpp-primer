#include <iostream>
using std::string;

void show_string(string *str, int times = 1);

int main() {
	string str = "Hello";
	show_string(&str, 10);
	return 0;
}

void show_string(string *str, int times) {
	using std::cout;
	using std::endl;
	for (int i = 0; i < times; ++i) {
		cout << *str << endl;
	}
}
