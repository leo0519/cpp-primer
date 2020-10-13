#include <iostream>
#include <cstring>

int main() {
	using namespace std;

	char first_name[32];
	char last_name[32];
	char full_name[64];
	cout << "Enter your first name: ";
	cin.getline(first_name, 32);
	cout << "Enter your last name: ";
	cin.getline(last_name, 32);
	strcpy(full_name, last_name);
	strcat(full_name, ", ");
	strcat(full_name, first_name);
	cout << "Here's the information in a single string: ";
	cout << full_name << endl;

	return 0;
}
