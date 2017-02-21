#include "stdafx.h"
#include "complex.h"


complex::complex()
{
	_re = 0.0;
	_im = 0.0;
}


complex::complex(const double re, const double im)
{
	_re = re;
	_im = im;
}


complex::~complex()
{
}


void complex::print(std::ostream& out) const
{
	out << _re << "+" << _im << "i" << std::endl;
}


complex complex::add(const complex& c) const
{
	return complex(_re + c._re, _im + c._im);
}


complex complex::sub(const complex& c) const
{
	return complex(_re - c._re, _im - c._im);
}


complex complex::mult(const int num) const
{
	return complex(_re * num, _im * num);
}


complex complex::div(const int num) const
{
	if (num)
	{
		return complex(_re / num, _im / num);
	}
	return complex(_re, _im);
}
