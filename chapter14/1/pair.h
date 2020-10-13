#ifndef PAIR_H_
#define PAIR_H_

template <class T1, class T2>
class Pair {
private:
	T1 a;
	T2 b;
public:
	T1 &first() {return a;}
	T2 &second() {return b;}
	const T1 &first() const {return a;}
	const T2 &second() const {return b;}
	Pair(const T1 &aval, const T2 &bval) : a(aval), b(bval) {}
	Pair() {}
};

#endif
