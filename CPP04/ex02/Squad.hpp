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
		Squad				&operator=(const Squad &rhs);

	private:
		int m_count;

};

#endif