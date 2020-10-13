#include <iostream>
#include <cstring>

struct stringy {
	char *str;
	int ct;
};

stringy &set(stringy &stry, char *chr);
void show(const char *chr, int times = 1);
void show(const stringy &stry, int times = 1);

int main() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	return 0;
}

stringy &set(stringy &stry, char *chr) {
	stry.ct = strlen(chr);
	stry.str = new char[stry.ct + 1];
	strcpy(stry.str, chr);
	return stry;
}

void show(const char *chr, int times) {
	using std::cout;
	using std::endl;
	for (int i = 0; i < times; ++i) {
		cout << chr << endl;
	}
}

void show(const stringy &stry, int times) {
	show(stry.str, times);
}
