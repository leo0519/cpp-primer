#include <iostream>
#include "stack.h"

int main() {
	using std::cout;
	Stack one;
	Stack two(2);
	cout << one.isempty() << "\n";
	cout << two.isempty() << "\n";
	two.push(10);
	two.push(20);
	cout << two.isfull() << "\n";
	Stack three = two;
	Stack four;
	four = three;
	unsigned long p;
	four.pop(p);
	cout << p << "\n";
	four.pop(p);
	cout << p << "\n";
	return 0;
}
