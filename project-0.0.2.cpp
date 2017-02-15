// project-0.0.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "complex.h"
#include <iostream>


int main(void)
{
	complex a(2.3, 5.0), b(7.6), c;

	a.print(std::cout);
	b.print(std::cout);
	c.print(std::cout);

	c.add(a);
	c.print(std::cout);

	a.add(b);
	a.print(std::cout);

	a.mult(4);
	a.print(std::cout);

	b.sub(a);
	b.print(std::cout);

	b.div(7);
	b.print(std::cout);

	return 0;
}

