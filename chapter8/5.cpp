#include <iostream>

const int arsize = 5;

template <typename T>
T max5(T arr[]);

int main() {
	using std::cout;
	using std::endl;
	int x[arsize] = {1, 2, 3, 4, 5};
	double y[arsize] = {3.2, 2.1, 1.5, 9, 4.4};
	cout << max5(x) << endl;
	cout << max5(y) << endl;
	return 0;
}

template <typename T>
T max5(T arr[]) {
	T max = arr[0];
	for (int i = 1; i < arsize; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
