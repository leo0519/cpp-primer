#include <iostream>

int main() {
	using namespace std;

	int degree, minute, second;
	cout << "Enter a latitude in degrees, minutes, and seconds:";
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = "
	     << degree + minute / 60.0 + second / 3600.0 << " degrees" << endl;

	return 0;
}
