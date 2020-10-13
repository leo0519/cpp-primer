#ifndef QUEUE_H_
#define QUEUE_H

template <class T, int n>
class Queue {
private:
	T item[n];
	int base;
	int top;
public:
	Queue();
	Queue(const Queue &q);
	bool isempty() const;
	bool isfull() const;
	bool push(const T &it);
	bool pop(T &it);
};

template <class T, int n>
Queue<T, n>::Queue() : base(0), top(0) {}

template <class T, int n>
Queue<T, n>::Queue(const Queue &q) : base(q.base), top(q.top) {
	for (int i = 0; i < n; ++i)
		item[i] = q.item[i];
}

template <class T, int n>
bool Queue<T, n>::isempty() const {
	return base == top;
}

template <class T, int n>
bool Queue<T, n>::isfull() const {
	return top == -1;
}

template <class T, int n>
bool Queue<T, n>::push(const T &it) {
	if (isfull())
		return false;
	item[top++] = it;
	top %= n;
	if (top == base)
		top = -1;
	return true;
}

template <class T, int n>
bool Queue<T, n>::pop(T &it) {
	if (isempty())
		return false;
	if (isfull())
		top = base;
	it = item[base++];
	base %= n;
	return true;
}

#endif
