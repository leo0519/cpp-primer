#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);
void show(long ar[], int n);

int main() {
	long ar[10] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
	show(ar, 10);
	int newsize = reduce(ar, 10);
	show(ar, newsize);
	return 0;
}

int reduce(long ar[], int n) {
	std::sort(ar, ar + n);
	auto res = std::unique(ar, ar + n);
	return res - ar;
}

void show(long ar[], int n) {
	for (int i = 0; i < n; ++i)
		std::cout << ar[i] << " ";
	std::cout << "\n";
}
