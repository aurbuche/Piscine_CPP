#include "Character.hpp"

Character::Character(void) : _inventory[4](0), _name("none")
{
}

Character::Character(std::string name) : _inventory(NULL), _name(name)
{
}

Character::Character(const Character &src)
{
	*this = rhs;
}

Character::~Character(void)
{
}

Character			&Character::operator=(const Character &rhs)
{
	this->_inventory[4] = rhs._inventory[4];
	this->_name = rhs._name;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

//AMateria			Character::getInventory[4](void) const
//{
//	return (_inventory[4]);
//}
//
//void				Character::setInventory[4](AMateria const value)
//{
//	_inventory[4] = value;
//}

std::string			Character::getName(void) const
{
	return (_name);
}

void				Character::setName(std::string const value)
{
	_name = value;
}
