#include "PlasmaRiffle.hpp"

PlasmaRiffle::PlasmaRiffle(void)
{
	m_name = "Plasma Riffle";
	m_damage = 21;
	m_AP = 5;
	m_sound = "* piouuu piouuu piouuu *";
}

PlasmaRiffle::PlasmaRiffle(const PlasmaRiffle &rhs)
{
	*this = rhs;
}

PlasmaRiffle::~PlasmaRiffle(void)
{
}

PlasmaRiffle			&PlasmaRiffle::operator=(const PlasmaRiffle &rhs)
{
	(void)rhs;
	return (*this);
}

void			PlasmaRiffle::attack() const {
	std::cout << getSound() << std::endl;
}
