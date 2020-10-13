#ifndef VINTAGEPORT_H_
#define VINTAGEPORT_H_
#include <iostream>
#include "port.h"
using std::ostream;

class VintagePort : public Port {
private:
	char *nickname;
	int year;
public:
	VintagePort();
	VintagePort(const char *br, int b, const char *nn, int y);
	VintagePort(const VintagePort &vp);
	~VintagePort() {delete [] nickname;}
	VintagePort &operator=(const VintagePort &vp);
	virtual void Show() const;
	friend ostream &operator<<(ostream &os, const VintagePort &vp);
};

#endif
