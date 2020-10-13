#include <iostream>
#include "bank.h"

Bank::Bank() {
	balance = 0;
}

Bank::Bank(const std::string &nm, const std::string &nb) {
	name = nm;
	number = nb;
	balance = 0;
}

void Bank::show() const {
	std::cout << "Depositor's name: " << name << "\n";
	std::cout << "Account number: " << number << "\n";
	std::cout << "Balance: " << balance << "\n";
}

void Bank::deposit(int amount) {
	balance += amount;
}

void Bank::withdraw(int amount) {
	balance -= amount;
}
