#include <iostream>

const int number_of_month = 12;

int main() {
	using namespace std;

	string month[number_of_month] = {
		"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};
	int book[number_of_month];
	int sum_book = 0;
	for (int i = 0; i < number_of_month; ++i) {
		cout << "Enter the number of books saled in " << month[i] << ": ";
		cin >> book[i];
		sum_book += book[i];
	}
	cout << "The total books saled in the year is " << sum_book << endl;

	return 0;
}
