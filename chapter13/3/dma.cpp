#include <iostream>
#include <cstring>
#include "dma.h"

DMAABC::DMAABC(const char *l, int r) {
	label = new char[strlen(l) + 1];
	strcpy(label, l);
	rating = r;
}

DMAABC::DMAABC(const DMAABC &da) {
	label = new char[strlen(da.label) + 1];
	strcpy(label, da.label);
	rating = da.rating;
}

DMAABC::~DMAABC() {}

DMAABC &DMAABC::operator=(const DMAABC &da) {
	if (this == &da)
		return *this;
	delete [] label;
	label = new char[strlen(da.label) + 1];
	strcpy(label, da.label);
	rating = da.rating;
	return *this;
}

baseDMA::baseDMA(const char *l, int r) : DMAABC(l, r) {}

baseDMA::baseDMA(const baseDMA &bd) : DMAABC(bd) {}

baseDMA::~baseDMA() {}

baseDMA &baseDMA::operator=(const baseDMA &bd) {
	DMAABC::operator=(bd);
}

void baseDMA::View() const {
	cout << "Label: "
}
