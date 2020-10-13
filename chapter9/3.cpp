#include <iostream>
#include <new>
#include <cstring>

char buffer[128];

struct chaff {
	char dross[20];
	int slag;
};

void setchaff(chaff &cf, const char *ds, int sg);
void showchaff(const chaff &cf);

int main() {
	chaff *cf = new(buffer) chaff[2];
	setchaff(cf[0], "Hello", 10);
	setchaff(cf[1], "World", 20);
	for (int i = 0; i < 2; ++i)
		showchaff(cf[i]);
	return 0;
}

void setchaff(chaff &cf, const char *ds, int sg) {
	strcpy(cf.dross, ds);
	cf.slag = sg;
}

void showchaff(const chaff &cf) {
	using std::cout;
	cout << "Dross: " << cf.dross << "\n";
	cout << "Slag: " << cf.slag << "\n";
}
