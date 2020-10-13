#include "list.h"

List::List() {
	size = 0;
}

void List::add(Item &it) {
	item[size++] = it;
}

bool List::isempty() const {
	return size == 0;
}

bool List::isfull() const {
	return size == MAX;
}

void List::visit(void (*pf)(Item &it)) {
	for (int i = 0; i < size; ++i)
		(*pf)(item[i]);
}
