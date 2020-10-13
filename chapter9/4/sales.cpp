#include <iostream>
#include "sales.h"
namespace SALES {
	void setSales(Sales &s, const double ar[], int n) {
		for (int i = 0; i < n && i < QUARTERS; ++i)
			s.sales[i] = ar[i];
		for (int i = n; i < QUARTERS; ++i)
			s.sales[i] = 0.0;

	}
	void setSales(Sales &s) {
		using std::cin;
		using std::cout;
		cout << "Enter sales for 4 quarters: ";
		for (int i = 0; i < QUARTERS; ++i)
			cin >> s.sales[i];
	}
	void showSales(Sales &s) {
		using std::cout;
		cout << "The sales for 4 quarters are: ";
		for (int i = 0; i < QUARTERS; ++i)
			cout << s.sales[i] << " ";
		cout << "\n";
	}
}
