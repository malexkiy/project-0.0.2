#include "stdafx.h"
#include "complex.h"


complex::complex()
{
	this->_re = 0.0;
	this->_im = 0.0;
}


complex::complex(const double re, const double im)
{
	this->_re = re;
	this->_im = im;
}


complex::complex(const double re)
{
	this->_re = re;
	this->_im = 0.0;
}


complex::~complex()
{
}


void complex::print(std::ostream& out) const
{
	out << _re << "+" << _im << "i" << std::endl;
}


void complex::add(const complex& c)
{
	this->_re += c._re;
	this->_im += c._im;
}


void complex::sub(const complex& c)
{
	this->_re -= c._re;
	this->_im -= c._im;
}


void complex::mult(const int num)
{
	this->_re *= num;
	this->_im *= num;
}


void complex::div(const int num)
{
	if (num)
	{
		this->_re /= num;
		this->_im /= num;
	}
}
