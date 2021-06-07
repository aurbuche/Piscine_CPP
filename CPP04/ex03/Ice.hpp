#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &rhs);
		virtual ~Ice(void);
		Ice					&operator=(const Ice &rhs);

		Ice*			clone() const;
		virtual void	use(ICharacter& target);

	private:
};

#endif