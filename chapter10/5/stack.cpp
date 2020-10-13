#include "stack.h"

Stack::Stack() {
	top = 0;
}

bool Stack::isempty() const {
	return top == 0;
}

bool Stack::isfull() const {
	return top == MAX;
}

bool Stack::push(const Item &it) {
	if (isfull())
		return false;
	else {
		item[top++] = it;
		return true;
	}
}

bool Stack::pop(Item &it) {
	if (isempty())
		return false;
	else {
		it = item[top--];
		return true;
	}
}
