#ifndef A_HPP
# define A_HPP
# include <iostream>
# include "Base.hpp"

class A : public Base
{
public:
	A(void);
	A(const A &rhs);
	~A(void);
	A				&operator=(const A &rhs);

//		GETTER // SETTER


private:
};

#endif