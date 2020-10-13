#ifndef DMA_H_
#define DMA_H_
#include <iostream>
using std::ostream;

class DMAABC {
private:
	char *label;
	int rating;
public:
	DMAABC(const char *l, int r);
	DMAABC(const DMAABC &da);
	virtual ~DMAABC();
	DMAABC &operator=(const DMAABC &da);
	virtual void View() const = 0;
};

class baseDMA : public DMAABC {
public:
	baseDMA(const char *l = "null", int r = 0);
	baseDMA(const baseDMA &bd);
	virtual ~baseDMA();
	baseDMA &operator=(const baseDMA &bd);
	virtual void View() const;
};
#endif
