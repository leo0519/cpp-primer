#include <stdexcept>

class arg_error : public std::logic_error {
private:
	double arg1;
	double arg2;
	std::string fname;
public:
	arg_error(double a1 = 0.0, double a2 = 0.0, const char *fn = "none", const char *msg = "invalid arguments\n")
		: logic_error(msg), arg1(a1), arg2(a2), fname(fn) {} 
	const char *mesg() const { return logic_error::what(); }
};

class bad_hmean : public arg_error {
public:
	bad_hmean(double a1 = 0.0, double a2 = 0.0)
		: arg_error(a1, a2, "hmean", "invalid arguments: a = -b\n") {}
	const char *mesg() const { return arg_error::mesg(); }
};

class bad_gmean : public arg_error {
public:
	bad_gmean(double a1 = 0.0, double a2 = 0.0)
		: arg_error(a1, a2, "gmean", "gmean() arguments should be >= 0\n") {}
	const char *mesg() const { return arg_error::mesg(); }
};
