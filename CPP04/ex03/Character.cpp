#include "Character.hpp"

Character::Character(void) : m_inventory(0), m_name("Default")
{
}

Character::Character(std::string name) : m_inventory(0), m_name(name)
{
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character::~Character(void)
{
}

Character			&Character::operator=(const Character &rhs)
{
	m_inventory = rhs.m_inventory;
	m_name = rhs.m_name;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

AMateria			Character::getInventory(void) const
{
	return (m_inventory);
}

void				Character::setInventory(AMateria const value, int index)
{
	m_inventory[index] = value;
}

std::strig			Character::getName(void) const
{
	return (m_name);
}

void				Character::setName(std::strig const value)
{
	m_name = value;
}
