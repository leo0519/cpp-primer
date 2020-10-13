#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt {
public:
	enum Mode {STN, ITG, FLT};
private:
	enum {Lbs_per_stn = 14};
	int stone;
	double pds_left;
	double pounds;
	Mode state;
public:
	Stonewt(double lbs, Mode m = STN);
	Stonewt(int stn, double lbs, Mode m = STN);
	Stonewt();
	~Stonewt();
	friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
	Stonewt operator+(const Stonewt &s) const;
	Stonewt operator-(const Stonewt &s) const;
	Stonewt operator*(double n) const;
	friend Stonewt operator*(double n, const Stonewt &s);
	void set_stn();
	void set_itg();
	void set_flt();
};

#endif
