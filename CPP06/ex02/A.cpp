#include "A.hpp"

A::A(void)
{
	std::cout << "Class A has been created!\n";
}

A::A(const A &rhs)
{
	*this = rhs;
}

A::~A(void)
{
}

A				&A::operator=(const A &rhs)
{
	(void)rhs;
	return (*this);
}