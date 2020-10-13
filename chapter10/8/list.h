#ifndef LIST_H_
#define LIST_H_

typedef int Item;

class List {
private:
	static const int MAX = 32;
	int size;
	Item item[MAX];
public:
	List();
	void add(Item &it);
	bool isempty() const;
	bool isfull() const;
	void visit(void (*pf)(Item &it));
};

#endif
