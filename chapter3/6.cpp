#include <iostream>

int main() {
	using namespace std;

	double mile, gallon;
	cout << "How many miles you have driven: ";
	cin >> mile;
	cout << "How many gallons of gasoline you have used: ";
	cin >> gallon;
	cout << "The miles per gallon your car has gotten are ";
	cout << mile / gallon << endl;

	return 0;
}
