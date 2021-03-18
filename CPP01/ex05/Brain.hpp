#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include <sstream>
# include <cstdlib>

class	Brain
{
	public:
		Brain();
		~Brain();
		const void* identify() const;

	private:
		const void* address;
};

#endif
