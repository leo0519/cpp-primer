#include <iostream>
#include <cmath>
#include "vector.h"

namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);
	void Vector::set_mag() {
		mag = sqrt(x * x + y * y);
	}
	void Vector::set_ang() {
		if (x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);
	}
	void Vector::set_x() {
		x = mag * cos(ang);
	}
	void Vector::set_y() {
		y = mag * sin(ang);
	}
	Vector::Vector() {
		x = y = mag = ang = 0.0;
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
			set_mag();
			set_ang();
		}
		else if (mode == POL) {
			mag = n1;
			ang = n2 / Rad_to_deg;
			set_x();
			set_y();
		}
		else {
			std::cout << "Incorrect 3rd argument to Vector() -- ";
			std::cout << "Vector set to 0\n";
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}
	Vector::~Vector() {}
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
			os << "(m, a) = (" << a.mag << ", " << a.ang * Rad_to_deg << ")\n";
		else
			os << "Vector object mode is invalid\n";
		return os;
	}
}