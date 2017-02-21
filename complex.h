#pragma once
#include <ostream>

class complex
{
private:
	double _re, _im;

public:
	complex();
	complex(const double, const double);
	~complex();

	void print(std::ostream&) const;
	complex add(const complex&) const;
	complex sub(const complex&) const;
	complex mult(const int) const;
	complex div(const int) const;
};

