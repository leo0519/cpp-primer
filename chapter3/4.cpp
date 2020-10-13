#include <iostream>

int main() {
	using namespace std;

	long second, minute, hour, day;
	cout << "Enter the number of seconds: ";
	cin >> second;
	minute = second / 60;
	second = second % 60;
	hour = minute / 60;
	minute = minute % 60;
	day = hour / 24;
	hour = hour % 24;
	cout << second << " seconds = ";
	cout << day << " days, ";
	cout << hour << " hours, ";
	cout << minute << " minutes, ";
	cout << second << " seconds" << endl;

	return 0;
}
