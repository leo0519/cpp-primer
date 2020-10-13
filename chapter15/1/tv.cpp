#include <iostream>
#include "tv.h"

bool Tv::volup() {
	if (volume < MaxVal) {
		++volume;
		return true;
	}
	else
		return false;
}

bool Tv::voldown() {
	if (volume > MinVal) {
		--volume;
		return true;
	}
	else
		return false;
}

void Tv::chanup() {
	if (channel < maxchannel)
		++channel;
	else
		channel = 1;
}

void Tv::chandown() {
	if (channel > 1)
		--channel;
	else
		channel = maxchannel;
}

void Tv::settings() const {
	std::cout << "TV is " << (state == On ? "On" : "Off") << "\n";
	if (state == On) {
		std::cout << "Volume setting = " << volume << "\n";
		std::cout << "Channel setting = " << channel << "\n";
		std::cout << "Mode = " << (mode == Antenna ? "Antenna" : "Cable") << "\n";
		std::cout << "Input = " << (input == TV ? "TV" : "DVD") << "\n";
	}
}

void Tv::set_gmode(Remote &r) const {
	if (state == On)
		r.set_gmode();
}
