#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main() {
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	char filename[32];
	cout << "Enter target distance: ";
	cin >> target;
	cout << "Enter step length: ";
	cin >> dstep;
	cout << "Enter the output file name: ";
	cin >> filename;
	ofstream of;
	of.open(filename);
	of << "Target Distance: " << target << ", Step Size: " << dstep << "\n";
	int i;
	for (i = 0; result.magval() < target; ++i) {
		of << i << ": (x, y) = (" << result.xval() << ", " << result.yval() << ")\n";
		direction = rand() % 360;
		step.reset(dstep, direction, Vector::POL);
		result = result + step;
	}
	of << i << ": (x, y) = (" << result.xval() << ", " << result.yval() << ")\n";
	of << "After " << i << " steps, the subject has the following location:\n";
	of << result;
	of << " or\n";
	result.polar_mode();
	of << result;
	of << "Average outward distance per step = " << result.magval() / i << "\n";
	return 0;
}
