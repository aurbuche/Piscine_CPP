#include "Character.hpp"

Character::Character(void) : _inventory(NULL), _name("none"), _count(0)
{
}

Character::Character(std::string name) : _inventory(NULL), _name(name), _count(0)
{
}

Character::Character(const Character &src)
{
	*this = src;
}

Character::~Character(void)
{
}

Character			&Character::operator=(const Character &rhs)
{
	int i = 0;
	_name = rhs._name;
	while (i < _count)
	{
		delete _inventory[i];
		i++;
	}
	delete [] _inventory;
	i = 0;
	_inventory = new AMateria*[rhs._count];
	_name = rhs._name;
	_count = rhs._count;
	while (i < _count)
	{
		_inventory[i] = rhs._inventory[i]->clone();
		i++;
	}
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string	const &	Character::getName(void) const
{
	return (_name);
}

void				Character::setName(std::string const value)
{
	_name = value;
}

void				Character::equip(AMateria* material)
{
	if (_count >= 3)
		std::cout << "Inventory is full!" << std::endl;
	else
	{
		_inventory[_count] = material;
		_count++;
	}
}
