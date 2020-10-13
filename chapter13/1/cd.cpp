#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char *s1, const char *s2, int n, double x) {
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd &d) {
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	strcpy(performers, "No Name");
	strcpy(label, "No Label");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd() {}

void Cd::Report() const {
	using std::cout;
	cout << "Performers: " << performers << "\n";
	cout << "Label: " << label << "\n";
	cout << "Selections: " << selections << "\n";
	cout << "Playtime: " << playtime << "\n";
}

Cd &Cd::operator=(const Cd &d) {
	if (this == &d)
		return *this;
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}
