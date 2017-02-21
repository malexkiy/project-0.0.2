#include "stdafx.h"
#include "complex.h"
#include <iostream>


int main(void)
{
	complex a(2.3, 5.0), b(7.6, 0), c;

	a.print(std::cout);
	b.print(std::cout);
	c.print(std::cout);

	c = c.add(a);
	c.print(std::cout);

	c = a.add(b);
	c.print(std::cout);

	c = a.mult(4);
	c.print(std::cout);

	c = b.sub(a);
	c.print(std::cout);

	c = b.div(0);
	c.print(std::cout);

	return 0;
}

