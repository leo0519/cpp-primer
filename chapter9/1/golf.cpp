#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc) {
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf &g) {
	using std::cout;
	using std::cin;
	cout << "Enter the full name: ";
	char buffer[Len];
	cin.getline(buffer, Len - 1);
	cout << "Enter the handicap: ";
	int hc;
	cin >> hc;
	setgolf(g, buffer, hc);
	if (buffer[0] == '\0')
		return 0;
	else
		return 1;
}

void handicap(golf &g, int hc) {
	g.handicap = hc;
}

void showgolf(const golf &g) {
	using std::cout;
	using std::endl;
	cout << "Full name: " << g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
}
