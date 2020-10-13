#include <iostream>
#include "golf.h"

int main() {
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
	golf andy;
	setgolf(andy);
	showgolf(andy);
	handicap(ann, 48);
	showgolf(ann);
	return 0;
}
