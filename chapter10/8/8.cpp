#include <iostream>
#include "list.h"

void mul2(int &x) {
	x *= 2;
}

void show(int &x) {
	std::cout << x << "\n";
}

int main() {
	List list;
	int x = 10;
	int y = 20;
	list.add(x);
	list.add(y);
	list.visit(mul2);
	list.visit(show);
	return 0;
}
