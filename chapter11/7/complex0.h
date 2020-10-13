#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

namespace COMPLEX0 {
	class Complex {
	private:
		double r;
		double i;
	public:
		Complex();
		Complex(double a, double b);
		Complex operator+(const Complex &b) const;
		Complex operator-(const Complex &b) const;
		Complex operator*(const Complex &b) const;
		Complex operator*(double n) const;
		friend Complex operator*(double n, const Complex &a);
		Complex operator~() const;
		friend std::istream &operator>>(std::istream &is, Complex &a);
		friend std::ostream &operator<<(std::ostream &os, const Complex &a);
	};
}

#endif
