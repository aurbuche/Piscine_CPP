#include "Cure.hpp"

Cure::Cure(void)
{
	_type = "cure";
	_xp = 0;
}

Cure::Cure(const Cure &rhs)
{
	*this = rhs;
}

Cure::~Cure(void)
{
}

Cure				&Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	return (*this);
}

Cure*			Cure::clone(void) const
{
	Cure *clone = new Cure(*this);
	return clone;
}

void			Cure::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* heals  " << target.getName() <<  "'s wounds *" << std::endl;
}
