#include <iostream>
#include <cstring>
#include "person.h"

Person::Person(const std::string &ln, const char *fn) {
	lname = ln;
	strcpy(fname, fn);
}

void Person::Show() const {
	std::cout << fname << " " << lname << "\n";
}

void Person::FormalShow() const {
	std::cout << lname << ", " << fname << "\n";
}
