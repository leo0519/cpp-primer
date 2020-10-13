#include <iostream>
#include <algorithm>

template <class T>
int reduce(T ar[], int n);
template <class T>
void show(T ar[], int n);

int main() {
	long ar[10] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
	show(ar, 10);
	int newsize = reduce(ar, 10);
	show(ar, newsize);
	return 0;
}

template <class T>
int reduce(T ar[], int n) {
	std::sort(ar, ar + n);
	auto res = std::unique(ar, ar + n);
	return res - ar;
}

template <class T>
void show(T ar[], int n) {
	for (int i = 0; i < n; ++i)
		std::cout << ar[i] << " ";
	std::cout << "\n";
}
