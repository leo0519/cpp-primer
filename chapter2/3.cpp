#include <iostream>

void three_blind_mice();
void see_how_they_run();

int main() {

	three_blind_mice();
	three_blind_mice();
	see_how_they_run();
	see_how_they_run();

	return 0;
}

void three_blind_mice() {
	std::cout << "Three blind mice" << std::endl;
}

void see_how_they_run() {
	std::cout << "See how they run" << std::endl;
}
