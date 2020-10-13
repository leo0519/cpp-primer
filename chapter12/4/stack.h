#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack {
private:
	enum {MAX = 10};
	Item *pitems;
	int size;
	int top;
public:
	Stack(int n = MAX);
	Stack(const Stack &st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	bool push(const Item &it);
	bool pop(Item &it);
	Stack &operator=(const Stack &st);
};

#endif
