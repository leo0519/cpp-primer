#include <iostream>
#include <cmath>
#include "vector.h"

namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);
	Vector::Vector() {
		x = y = 0.0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form) {
		reset(n1, n2, form);
	}
	void Vector::reset(double n1, double n2, Mode form) {
		mode = form;
		if (mode == RECT) {
			x = n1;
			y = n2;
		}
		else if (mode == POL) {
			double ang = n2 / Rad_to_deg;
			x = n1 * cos(ang);
			y = n2 * sin(ang);
		}
		else {
			std::cout << "Incorrect 3rd argument to Vector() -- ";
			std::cout << "Vector set to 0\n";
			x = y = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector() {}
	double Vector::magval() const {
		return sqrt(x * x + y * y);
	}
	double Vector::angval() const {
		if (x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y, x);
	}
	Vector Vector::operator+(const Vector &b) const {
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector &b) const {
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator-() const {
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n) const {
		return Vector(x * n, y * n);
	}
	Vector operator*(double n, const Vector &a) {
		return a * n;
	}
	std::ostream &operator<<(std::ostream &os, const Vector &a) {
		if (a.mode == Vector::RECT)
			os << "(x, y) = (" << a.x << ", " << a.y << ")\n";
		else if (a.mode == Vector::POL)
			os << "(m, a) = (" << a.magval() << ", " << a.angval() * Rad_to_deg << ")\n";
		else
			os << "Vector object mode is invalid\n";
		return os;
	}
}
