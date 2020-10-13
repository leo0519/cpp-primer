#include <iostream>

const int SLEN = 30;

struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student *ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; ++i) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n) {
	using std::cout;
	using std::endl;
	using std::cin;
	char buffer[SLEN];
	int i;
	for (i = 0; i < n; ++i) {
		cout << "Student #" << (i + 1) << ":" << endl;
		cout << "Full name: ";
		cin.getline(pa[i].fullname, SLEN);
		if (pa[i].fullname[0] == '\0')
			break;
		cout << "Hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "OOPLevel: ";
		cin >> pa[i].ooplevel;
		while (cin.get() != '\n')
			continue;
	}
	return i;
}

void display1(student st) {
	using std::cout;
	using std::endl;
	cout << "Student name: " << st.fullname << endl;
	cout << "Hobby: " << st.hobby << endl;
	cout << "OOPLevel: " << st.ooplevel << endl;
}

void display2(const student *ps) {
	display1(*ps);
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; ++i) {
		display1(pa[i]);
	}
}
