#include <iostream>
#include "sales.h"

namespace SALES {
	Sales::Sales(const double ar[], int n) {
		for (int i = 0; i < QUARTERS && i < n; ++i)
			sales[i] = ar[i];
		for (int i = n; i < QUARTERS; ++i)
			sales[i] = 0.0;
		double sum = 0.0;
		max = sales[0];
		min = sales[0];
		for (int i = 0; i < QUARTERS; ++i) {
			sum += sales[i];
			if (sales[i] > max)
				max = sales[i];
			if (sales[i] < min)
				min = sales[i];
		}
		average = sum / 4;
	}

	Sales::Sales() {
		for (int i = 0; i < QUARTERS; ++i) {
			sales[i] = 0.0;
		}
		average = max = min = 0.0;
	}

	void Sales::showSales() const {
		using std::cout;
		using std::endl;
		for (int i = 0; i < QUARTERS; ++i)
			cout << sales[i] << " ";
		cout << endl;
		cout << "Average: " << average << endl;
		cout << "Max: " << max << endl;
		cout << "Min: " << min << endl;
	}

	void Sales::setSales() {
		using std::cin;
		using std::cout;
		using std::endl;
		cout << "Enter sales:" << endl;
		for (int i = 0; i < QUARTERS; ++i) {
			cout << "sales[" << i << "]: ";
			cin >> sales[i];
		}
		double sum = 0.0;
		max = sales[0];
		min = sales[0];
		for (int i = 0; i < QUARTERS; ++i) {
			sum += sales[i];
			if (sales[i] > max)
				max = sales[i];
			if (sales[i] < min)
				min = sales[i];
		}
		average = sum / 4;
	}
}
