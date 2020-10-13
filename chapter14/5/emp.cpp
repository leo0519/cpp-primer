#include <iostream>
#include "emp.h"

abstr_emp::abstr_emp() : fname("none"), lname("none"), job("none") {}

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
	: fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const {
	std::cout << fname << " " << lname << " " << job << "\n";
}

void abstr_emp::SetAll() {
	std::cout << "Enter firstname: ";
	getline(std::cin, fname);
	std::cout << "Enter lastname: ";
	getline(std::cin, lname);
	std::cout << "Enter job: ";
	getline(std::cin, job);
}

std::ostream &operator<<(std::ostream &os, const abstr_emp &e) {
	os << e.fname << " " << e.lname << " " << e.job << "\n";
	return os;
}

abstr_emp::~abstr_emp() {}

employee::employee() : abstr_emp() {}

employee::employee(const std::string &fn, const std::string &ln, const std::string &j)
	: abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
	abstr_emp::ShowAll();
}

void employee::SetAll() {
	abstr_emp::SetAll();
}

manager::manager() : abstr_emp(), inchargeof(0) {}

manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico)
	: abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp &e, int ico) : abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager &m) : abstr_emp(m), inchargeof(m.inchargeof) {}

void manager::ShowAll() const {
	abstr_emp::ShowAll();
	std::cout << "In charge of " << inchargeof << "\n";
}

void manager::SetAll() {
	abstr_emp::SetAll();
	std::cout << "Enter the number of in charge: ";
	std::cin >> inchargeof;
}

fink::fink() : abstr_emp(), reportsto("none") {}

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo):
	abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink &f) : abstr_emp(f), reportsto(f.reportsto) {}

void fink::ShowAll() const {
	abstr_emp::ShowAll();
	std::cout << "Report to " << reportsto << "\n";
}

void fink::SetAll() {
	abstr_emp::SetAll();
	std::cout << "Enter the name reported to: ";
	getline(std::cin, reportsto);
}

highfink::highfink() : abstr_emp(), manager(), fink() {}
highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo, int ico)
	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico)
	: abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const manager &m, const std::string &rpo)
	: abstr_emp(m), manager(m), fink(m, rpo) {}

highfink::highfink(const fink &f, int ico)
	:abstr_emp(f), manager(f, ico), fink(f) {}

void highfink::ShowAll() const {
	abstr_emp::ShowAll();
	std::cout << "In charge of " << manager::InChargeOf() << "\n";
	std::cout << "Report to " << fink::ReportsTo() << "\n";
}
void highfink::SetAll() {
	abstr_emp::SetAll();
	std::cout << "Enter the name reported to: ";
	getline(std::cin, fink::ReportsTo());
	std::cout << "Enter the number of in charge: ";
	std::cin >> manager::InChargeOf();
	while(std::cin.get() != '\n')
		continue;
}
