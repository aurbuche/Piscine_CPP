#include "PowerFist.hpp"

PowerFist::PowerFist(void)
{
	m_name = "Power Fist";
	m_damage = 50;
	m_AP = 8;
	m_sound = "* pschhh... SBAM ! *";
}

PowerFist::PowerFist(const PowerFist &rhs)
{
	*this = rhs;
}

PowerFist::~PowerFist(void)
{
}

PowerFist			&PowerFist::operator=(const PowerFist &rhs)
{
	(void)rhs;
	return (*this);
}

void			PowerFist::attack() const {
	std::cout << getSound() << std::endl;
}

