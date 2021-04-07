#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);
		MateriaSource			&operator=(const MateriaSource &rhs);

		void		learnMateria(AMateria* materia);
		AMateria* 	createMateria(std::string const & type);

//		GETTER // SETTER


	private:
		AMateria*	_inventorySource[4];
		int			_count;
};

#endif