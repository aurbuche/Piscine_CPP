#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	int i = 0;
	if (this != &rhs)
	{
		this->_count = rhs._count;
		while (i <= _count)
		{
			this->_inventorySource[i] = rhs._inventorySource[i]->clone();
			i++;
		}
	}
	return *this;
}


void				MateriaSource::learnMateria(AMateria *materia) {
	if (_count > 3)
		std::cout << "You know to more to learn something!" << std::endl;
	else
	{
		_inventorySource[_count] = materia;
		_count++;
	}
}

AMateria*			MateriaSource::createMateria(const std::string &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	else
		return NULL;
}

	/********************************

			GETTER // SETTER

	********************************/
