#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
	m_hp = 170;
	m_type = "Super Mutant";
}

SuperMutant::SuperMutant(const SuperMutant &rhs)
{
	*this = rhs;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant			&SuperMutant::operator=(const SuperMutant &rhs)
{
	(void)rhs;
	return (*this);
}

void				SuperMutant::takeDamage(int damage) {
	if (damage > 0 && m_hp > 0)
		m_hp -= (damage - 3);
	if (m_hp <= 0)
		m_hp = 0;
}
