#include <iostream>
using std::string;

struct CandyBar {
	string brandname;
	double weight;
	int num_calory;
};

CandyBar &init_cb(CandyBar &cb, const char *name = "Millennium Munch", double weight = 2.85, int num_calory = 350);
void show_cb(const CandyBar &cb);

int main() {
	CandyBar cb;
	init_cb(cb);
	show_cb(cb);
	return 0;
}

CandyBar &init_cb(CandyBar &cb, const char *name, double weight, int num_calory) {
	cb.brandname = name;
	cb.weight = weight;
	cb.num_calory = num_calory;
	return cb;
}

void show_cb(const CandyBar &cb) {
	using std::cout;
	using std::endl;
	cout << "Brand name: " << cb.brandname << endl;
	cout << "Weight: " << cb.weight << endl;
	cout << "Number of calories: " << cb.num_calory << endl;
}
