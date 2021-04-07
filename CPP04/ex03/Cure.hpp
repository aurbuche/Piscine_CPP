#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &rhs);
		~Cure(void);
		Cure				&operator=(const Cure &rhs);

		Cure*			clone() const;
		virtual void	use(ICharacter& target);

};

#endif