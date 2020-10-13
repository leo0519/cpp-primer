#include <iostream>
#include "bank.h"

int main() {
	Bank bk("Leo Chen", "01210231120074");
	bk.show();
	bk.deposit(100);
	bk.show();
	bk.withdraw(36);
	bk.show();
	return 0;
}
