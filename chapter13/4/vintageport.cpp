#include <iostream>
#include <cstring>
#include "vintageport.h"
using std::ostream;

VintagePort::VintagePort() : Port() {
	nickname = new char[5];
	strcpy(nickname, "none");
	year = 1900;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y)
	: Port(br, "vintage", b) {
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort &vp)
	: Port(vp) {
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort &VintagePort::operator=(const VintagePort &vp) {
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete [] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const {
	using std::cout;
	Port::Show();
	cout << "Nickname: " << nickname << "\n";
	cout << "Year: " << year << "\n";
}

ostream &operator<<(ostream &os, const VintagePort &vp) {
	os << (const Port &)vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}
