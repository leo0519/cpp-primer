#ifndef WORKER_H_
#define WORKER_H_
#include <iostream>
using std::string;

class Worker {
private:
	string fullname;
	long id;
protected:
	void Data() const;
	void Get();
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const string &s, long n) : fullname(s), id(n) {}
	~Worker() {}
	void Set();
	void Show() const;
};

#endif
