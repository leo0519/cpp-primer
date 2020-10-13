#ifndef PLORG_H_
#define PLORG_H_

class Plorg {
private:
	enum {LEN = 20};
	char name[LEN];
	int CL;
public:
	Plorg(const char *nm = "Plorga", int cl = 50);
	void setCL(int cl);
	void show() const;
};

#endif
