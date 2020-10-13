#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(const char *nm, int cl) {
	strcpy(name, nm);
	CL = cl;
}

void Plorg::setCL(int cl) {
	CL = cl;
}

void Plorg::show() const {
	std::cout << "Name: " << name << "\n";
	std::cout << "CL: " << CL << "\n";
}
