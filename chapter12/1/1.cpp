#include "cow.h"

int main() {
	Cow one;
	one.ShowCow();
	Cow two("Leo", "Play", 60.0);
	two.ShowCow();
	Cow three(two);
	three.ShowCow();
	Cow four;
	four = three;
	four.ShowCow();
	return 0;
}
