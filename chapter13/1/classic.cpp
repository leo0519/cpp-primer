#include <iostream>
#include <cstring>
#include "classic.h"

Classic::Classic(const char *s1, const char *s2, const char *s3, int n, double x)
	: Cd(s1, s2, n, x) {
	strcpy(primary, s3);
}

Classic::Classic(const Classic &c)
	: Cd(c) {
	strcpy(primary, c.primary);
}

Classic::Classic()
	: Cd() {
	strcpy(primary, "No Primary");	
}

Classic::~Classic() {}

void Classic::Report() const {
	using std::cout;
	Cd::Report();
	cout << "Primary work: " << primary << "\n";
}

Classic &Classic::operator=(const Classic &c) {
	if (this == &c)
		return *this;
	Cd::operator=(c);
	strcpy(primary, c.primary);
}
