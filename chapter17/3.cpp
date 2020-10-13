#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[]) {
	using std::cout;
	using std::endl;
	using std::cin;
	using std::ios_base;
	using std::cerr;
	using std::ifstream;
	using std::ofstream;

	if (argc < 3) {
		cerr << "Usage: " << argv[0] << " source-file target-file" << endl;
		exit(EXIT_FAILURE);
	}

	ifstream fin(argv[1], ios_base::in);
	if (!fin) {
		cerr << "Can't open " << argv[1] << " for input" << endl;
	}

	ofstream fout(argv[2], ios_base::out);
	if (!fout) {
		cerr << "Cant open" << argv[2] << " for output" << endl;
		exit(EXIT_FAILURE);
	}

	char ch;
	while (fin.get(ch))
		fout.put(ch);

	cout << "Content of " << argv[1] << " was copied to " << argv[2] << endl;
	fin.close();
	fout.close();

	return 0;
}
