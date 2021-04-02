#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(const Squad &rhs);
		~Squad(void);
		Squad				&operator=(const ISquad &rhs);
		int				getCount(void) const;
		ISpaceMarine*	getUnit(int N) const;
		int				push(ISpaceMarine* unit);

	private:
		int _count;
		ISpaceMarine **_unit;

};

#endif