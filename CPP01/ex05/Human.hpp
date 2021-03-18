#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include <sstream>
# include <cstdlib>
# include "Brain.hpp"

class	Human
{
public:
	Human();
	~Human();
	const void* identify() const;
	const Brain& getBrain(void) const;


private:
	const Brain brain;
	const void* address;
};

#endif