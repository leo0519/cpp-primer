#ifndef STACK_H_
#define STACK_H_

struct customer {
	char fullname[35];
	double payment;
};

typedef customer Item;

class Stack {
private:
	enum {MAX = 32};
	int top;
	Item item[MAX];
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item &it);
	bool pop(Item &it);
};

#endif
