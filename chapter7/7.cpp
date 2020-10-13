#include <iostream>

const int Max = 5;

double *fill_array(double ar[], int limit);
void show_array(const double *begin, const double *end);
void revalue(double r, double *begin, double *end);

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	double properties[Max];
	double *end = fill_array(properties, Max);
	show_array(properties, end);
	if (end != properties) {
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n') {
				continue;
			}
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double *fill_array(double ar[], int limit) {
	using std::cout;
	using std::endl;
	using std::cin;
	double temp;
	int i;
	for (i = 0; i < limit; ++i, ++ar) {
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*ar = temp;
	}
	return ar;
}

void show_array(const double *begin, const double *end) {
	using std::cout;
	using std::endl;
	for (const double *i = begin; i != end; ++i) {
		cout << *i << " ";
	}
	cout << endl;
}

void revalue(double r, double *begin, double *end) {
	for (double *i = begin; i != end; ++i) {
		*i *= r;
	}
}
