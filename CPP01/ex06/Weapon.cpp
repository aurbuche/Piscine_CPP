#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	m_type = type;
}

std::string& Weapon::getType(void)
{
	return m_type;
}
