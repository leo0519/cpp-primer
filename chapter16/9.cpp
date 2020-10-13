#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <algorithm>
#include <random>

const int SIZE = 1000000;

int main() {
	using std::vector;
	using std::list;
	using std::cout;
	using std::cin;
	using std::endl;
	vector<int> vi0(SIZE, 0);
	for (int i = 0; i < SIZE; ++i)
		vi0[i] = rand();
	vector<int> vi(vi0);
	list<int> li(SIZE, 0);
	std::copy(vi0.begin(), vi0.end(), li.begin());
	clock_t start = std::clock();
	std::sort(vi.begin(), vi.end());
	clock_t end = std::clock();
	cout << "sort vector time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;
	start = std::clock();
	li.sort();
	end = std::clock();
	cout << "sort list time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;
	return 0;
}
