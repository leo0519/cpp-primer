#include <iostream>
#include "complex0.h"

namespace COMPLEX0 {
	Complex::Complex() {
		r = i = 0.0;
	}
	Complex::Complex(double a, double b) {
		r = a;
		i = b;
	}
	Complex Complex::operator+(const Complex &b) const {
		return Complex(r + b.r, i + b.i);
	}
	Complex Complex::operator-(const Complex &b) const {
		return Complex(r - b.r, i - b.i);
	}
	Complex Complex::operator*(const Complex &b) const {
		return Complex(r * b.r - i * b.i, r * b.i + i * b.r);
	}
	Complex Complex::operator*(double n) const {
		return Complex(r * n, i * n);
	}
	Complex operator*(double n, const Complex &a) {
		return a * n;
	}
	Complex Complex::operator~() const {
		return Complex(r, -i);
	}
	std::istream &operator>>(std::istream &is, Complex &a) {
		std::cout << "real: ";
		is >> a.r;
		std::cout << "imaginary: ";
		is >> a.i;
	}
	std::ostream &operator<<(std::ostream &os, const Complex &a) {
		os << "(" << a.r << ", " << a.i << "i)";
	}
}
