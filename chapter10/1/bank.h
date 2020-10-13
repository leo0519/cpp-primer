#ifndef BANK_H_
#define BANK_H_
#include <iostream>
using std::string;

class Bank {
private:
	string name;
	string number;
	int balance;
public:
	Bank();
	Bank(const string &nm, const string &nb);
	void show() const;
	void deposit(int amount);
	void withdraw(int amount);
};

#endif
