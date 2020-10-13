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
	double target;
	double dstep;
	char filename[32];
	int trial;
	cout << "Enter the number of trials: ";
	cin >> trial;
	cout << "Enter target distance: ";
	cin >> target;
	cout << "Enter step length: ";
	cin >> dstep;
	cout << "Enter the output file name: ";
	cin >> filename;
	ofstream of;
	of.open(filename);
	double *avg = new double[trial];
	for (int i = 0; i < trial; ++i) {
		Vector result(0.0, 0.0);
		of << "Target Distance: " << target << ", Step Size: " << dstep << "\n";
		int j;
		for (j = 0; result.magval() < target; ++j) {
			of << j << ": (x, y) = (" << result.xval() << ", " << result.yval() << ")\n";
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
		}
		of << j << ": (x, y) = (" << result.xval() << ", " << result.yval() << ")\n";
		of << "After " << j << " steps, the subject has the following location:\n";
		of << result;
		of << " or\n";
		result.polar_mode();
		of << result;
		avg[i] = result.magval() / j;
		of << "Average outward distance per step = " << avg[i] << "\n";
	}
	double max = avg[0];
	double min = avg[0];
	double sum = 0.0;
	for (int i = 0; i < trial; ++i) {
		sum += avg[i];
		if (avg[i] > max)
			max = avg[i];
		if (avg[i] < min)
			min = avg[i];
	}
	of << endl << "Result:" << endl;
	of << "Average distance: " << sum / trial << endl;
	of << "Max distance: " << max << endl;
	of << "Min distance: " << min << endl;
	return 0;
}
