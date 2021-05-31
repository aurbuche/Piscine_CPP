#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : _count(0) {
	std::memset(this->_inventorySource, 0, 4);

	return;
}

MateriaSource::MateriaSource(const MateriaSource &copy) : _count(copy._count) {
	for (int i = 0; i < 4; i++)
		this->_inventorySource[i] = copy._inventorySource[i];

	return;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->_count; i++)
	{
		delete this->_inventorySource[i];
		this->_inventorySource[i] = 0;
	}
	return;
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
