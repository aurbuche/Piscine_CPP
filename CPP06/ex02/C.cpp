#include "C.hpp"

C::C(void)
{
	std::cout << "Class C has been created!\n";
}

C::C(const C &rhs)
{
	*this = rhs;
}

C::~C(void)
{
}

C				&C::operator=(const C &rhs)
{
	(void)rhs;
	return (*this);
}