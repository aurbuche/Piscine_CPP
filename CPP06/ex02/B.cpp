#include "B.hpp"

B::B(void)
{
	std::cout << "Class B has been created!\n";
}

B::B(const B &rhs)
{
	*this = rhs;
}

B::~B(void)
{
}

B				&B::operator=(const B &rhs)
{
	(void)rhs;
	return (*this);
}