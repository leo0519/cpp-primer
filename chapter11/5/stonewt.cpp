#include <iostream>
#include "stonewt.h"

Stonewt::Stonewt(double lbs, Mode m) {
	stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	pounds = lbs;
	state = m;
}

Stonewt::Stonewt(int stn, double lbs, Mode m) {
	stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
	state = m;
}

Stonewt::Stonewt() {
	stone = pounds = pds_left = 0;
	state = STN;
}

Stonewt::~Stonewt() {}

std::ostream &operator<<(std::ostream &os, const Stonewt &s) {
	if (s.state == s.STN)
		std::cout << s.stone << " stone, " << s.pds_left << " pounds";
	else if (s.state == s.ITG) {
		std::cout << int(s.pounds) << " pounds";
	}
	else if (s.state == s.FLT) {
		std::cout << s.pounds << " pounds";
	}
	else
		std::cout << "Invalid state";
	return os;
}

Stonewt Stonewt::operator+(const Stonewt &s) const {
	return Stonewt(pounds + s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt &s) const {
	return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator*(double n) const {
	return Stonewt(pounds * n);
}

Stonewt operator*(double n, const Stonewt &s) {
	return s * n;
}

void Stonewt::set_stn() {
	state = STN;
}

void Stonewt::set_itg() {
	state = ITG;
}

void Stonewt::set_flt() {
	state = FLT;
}
