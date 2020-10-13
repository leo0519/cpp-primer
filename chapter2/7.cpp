#include <iostream>

void show_time(int hour, int time);

int main() {
	using namespace std;

	int hour, minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	show_time(hour, minute);

	return 0;
}

void show_time(int hour, int minute) {
	std::cout << "Time: " << hour << ":" << minute << std::endl;
}
