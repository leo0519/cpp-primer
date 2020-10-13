#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf(const char *name, int hc) {
	strcpy(fullname, name);
	handicap = hc;
}

void Golf::setGolf() {
	char nm[Len];
	int hc;
	std::cout << "Enter the full name: ";
	std::cin.getline(nm, Len - 1);
	std::cout << "Enter the handicap: ";
	std::cin >> hc;
	Golf gf(nm, hc);
	*this = gf;
}

void Golf::sethandicap(int hc) {
	handicap = hc;
}

void Golf::showgolf() const {
	std::cout << "Full name: " << fullname << "\n";
	std::cout << "Handicap: " << handicap << "\n";
}
