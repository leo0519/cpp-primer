#include <iostream>

int main() {
	using namespace std;

	char buffer;
	bool comply_flag = false;
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore    p) pianist" << endl;
	cout << "t) tree         g) game" << endl;
	cin >> buffer;
	while (!comply_flag) {
		comply_flag = true;
		switch (buffer) {
			case 'c':
				cout << "Your choice is carnivore." << endl;
				break;
			case 'p':
				cout << "Your choice is pianist." << endl;
				break;
			case 't':
				cout << "Your choice is tree." << endl;
				break;
			case 'g':
				cout << "Your choice is game." << endl;
				break;
			default:
				cout << "Please enter a c, p, t, or g: ";
				comply_flag = false;
		}
		if (!comply_flag)
			cin >> buffer;
	}

	return 0;
}
