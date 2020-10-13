#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <valarray>
#include "pair.h"
using std::string;
using std::valarray;

class Wine {
private:
	typedef valarray<int> ArrayInt;
	typedef Pair<ArrayInt, ArrayInt> PairArray;
	string name;
	PairArray data;
	int years;
public:
	Wine();
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	Wine(const Wine &w);
	void GetBottles();
	const string &Label() const {return name;}
	int sum() const;
	void Show() const;
};

#endif
