#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &rhs);
		~AssaultTerminator(void);
		AssaultTerminator			&operator=(const AssaultTerminator &rhs);
		virtual ISpaceMarine* clone(void) const;
		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;
};

#endif