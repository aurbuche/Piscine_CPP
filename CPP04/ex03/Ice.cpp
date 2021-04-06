#include "Ice.hpp"

Ice::Ice(void)
{
	_type = "ice";
	_xp = 0;
}

Ice::Ice(const Ice &rhs)
{
	_type = rhs._type;
	_xp = rhs._xp;
	*this = rhs;
}

Ice::~Ice(void)
{
}

Ice					&Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	return (*this);
}

Ice*			Ice::clone(void) const
{
	Ice *clone = new Ice(*this);
	return clone;
}

void			Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}

	/********************************

			GETTER // SETTER

	********************************/
