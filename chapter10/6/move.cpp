#include <iostream>
#include "move.h"

Move::Move(double a, double b) {
	x = a;
	y = b;
}

void Move::showmove() const {
	std::cout << "(X, Y) = (" << x << ", " << y << ")\n";
}

Move Move::add(const Move &m) const {
	Move res(x + m.x, y + m.y);
	return res;
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}
