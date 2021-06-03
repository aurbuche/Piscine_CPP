#ifndef C_HPP
# define C_HPP
# include <iostream>
# include "Base.hpp"

class C : public Base
{
public:
	C(void);
	C(const C &rhs);
	~C(void);
	C				&operator=(const C &rhs);

//		GETTER // SETTER


private:
};

#endif