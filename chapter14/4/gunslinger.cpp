#include <iostream>
#include "gunslinger.h"

void Gunslinger::Data() const {
	std::cout << "Draw: " << drawtime << "\n" << "Notches: " << notches << "\n";
}

void Gunslinger::Show() const {
	Person::Data();
	Data();
}

void Gunslinger::Set() {
	Person::Set();
	std::cout << "Enter drawtime: ";
	std::cin >> drawtime;
	std::cout << "Enter notches: ";
	std::cin >> notches;
	while (std::cin.get() != '\n')
		continue;
}
