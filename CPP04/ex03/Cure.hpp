#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &rhs);
		virtual ~Cure(void);
		Cure				&operator=(const Cure &rhs);

		Cure*			clone() const;
		virtual void	use(ICharacter& target);

};

#endif