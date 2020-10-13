#include "move.h"

int main() {
	Move point(10, 20);
	point.showmove();
	point = point.add(Move(30, 30));
	point.showmove();
	point.reset(10, 1);
	point.showmove();
	return 0;
}
