#ifndef WINE_H_
#define WINE_H_
#include <valarray>
#include "pair.h"
using std::string;
using std::valarray;

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private PairArray {
private:
	string name;
	int years;
public:
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
	string &Label();
	int sum() const;
	void Show() const;
};

#endif
