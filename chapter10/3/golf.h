#ifndef GOLF_H_
#define GOLF_H_

class Golf {
private:
	enum {Len = 40};
	char fullname[Len];
	int handicap;
public:
	Golf() {}
	Golf(const char *name, int hc);
	void setGolf();
	void sethandicap(int hc);
	void showgolf() const;
};

#endif
