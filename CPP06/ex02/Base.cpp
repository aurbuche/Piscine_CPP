#include "Base.hpp"

Base::Base(void)
{
}

Base::Base(const Base &rhs)
{
	*this = rhs;
}

Base::~Base(void)
{
}

Base				&Base::operator=(const Base &rhs)
{
	(void)rhs;
	return (*this);
}

Base*				Base::generate() {
	int irand = rand() % 3;
	if (irand == 1)
		A classA;
	else if (irand == 2)
		B classB;
	else
		C classC;
}