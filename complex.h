#pragma once
#include <ostream>

class complex
{
private:
	double _re, _im;

public:
	complex();
	complex(const double, const double);
	complex(const double);
	~complex();

	void print(std::ostream&) const;
	void add(const complex&);
	void sub(const complex&);
	void mult(const int);
	void div(const int);
};

