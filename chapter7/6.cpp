#include <iostream>

int Fill_array(double x[], int n);
void Show_array(const double x[], int n);
void Reverse_array(double x[], int n);

int main() {
	double x[5];
	int arsize;
	arsize = Fill_array(x, 5);
	Show_array(x, arsize);
	Reverse_array(x, arsize);
	Show_array(x, arsize);
	return 0;
}

int Fill_array(double x[], int n) {
	using std::cin;
	int i = 0;
	while (i < n && cin >> x[i]) {
		++i;
	}
	return i;
}

void Show_array(const double x[], int n) {
	using std::cout;
	using std::endl;
	for (int i = 0; i < n; ++i) {
		cout << x[i] << " ";
	}
	cout << endl;
}

void Reverse_array(double x[], int n) {
	for (int i = 0; i < n / 2; ++i) {
		double temp = x[i];
		x[i] = x[n - i - 1];
		x[n - i - 1] = temp;
	}
}
