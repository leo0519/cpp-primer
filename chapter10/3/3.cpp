#include <iostream>
#include "golf.h"

int main() {
	Golf one;
	Golf two("Leo Chen", 10);
	one.setGolf();
	two.sethandicap(20);
	one.showgolf();
	two.showgolf();
	return 0;
}
