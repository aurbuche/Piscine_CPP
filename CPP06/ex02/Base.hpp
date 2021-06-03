#ifndef BASE_HPP
# define BASE_HPP
# include <iostream>
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Base
{
	public:
		Base(void);
		Base(const Base &rhs);
		~Base(void);
		Base				&operator=(const Base &rhs);

		Base *	generate(void);


	private:
};

#endif