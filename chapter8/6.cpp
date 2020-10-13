#include <iostream>
#include <cstring>

template <typename T>
T maxn(T arr[], int size);

template <> char *maxn(char *arr[], int size);

int main() {
	using std::cout;
	using std::endl;
	int x[6] = {4, 1, 6, 0, 9, 5};
	double y[4] = {1.1, 3.5, 2.3, -1.1};
	const char *z[] = {
		"hello",
		"my",
		"name",
		"is",
		"leo"
	};
	cout << maxn(x, 6) << endl;
	cout << maxn(y, 4) << endl;
	cout << maxn(z, 5) << endl;
	return 0;
}

template <typename T>
T maxn(T arr[], int size) {
	T max = arr[0];
	for (int i = 1; i < size; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

template <> char *maxn(char *arr[], int size) {
	int maxLen = 0;
	char *maxStr;
	for (int i = 0; i < size; ++i) {
		int len = strlen(arr[i]);
		if (len > maxLen) {
			maxLen = len;
			maxStr = arr[i];
		}
	}
	return maxStr;
}
