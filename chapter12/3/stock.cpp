#include <iostream>
#include <cstring>
#include "stock.h"

Stock::Stock() {
	len = 8;
	company = new char[len + 1];
	strcpy(company, "no name");
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char *co, long n, double pr) {
	len = strlen(co);
	company = new char[len + 1];
	strcpy(company, co);
	shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock() {
	delete [] company;
}

void Stock::buy(long num, double price) {
	shares += num;
	share_val = price;
	set_tot();
}

void Stock::sell(long num, double price) {
	shares -= num;
	share_val = price;
	set_tot();
}

void Stock::update(double price) {
	share_val = price;
	set_tot();
}

ostream &operator<<(ostream &os, const Stock &s) {
	using std::ios_base;
	ios_base::fmtflags orig = os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = os.precision(3);
	os << "Company: " << s.company
	   << "  Shares: " << s.shares << "\n";
	os << "  Share Price :$" << s.share_val;
	os.precision(2);
	os << "  Total Worth: $" << s.total_val << "\n";
	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}

const Stock &Stock::topval(const Stock &s) const {
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
