#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria &src) : _type(src._type), _xp(src._xp)
{
}

AMateria::~AMateria(void)
{
}

AMateria		&AMateria::operator=(const AMateria &rhs)
{
	_type = rhs._type;
	_xp = rhs._xp;
	return *this;
}

std::string	const & AMateria::getType(void) const
{
	return _type;
}

unsigned int		AMateria::getXP(void) const
{
	return _xp;
}
