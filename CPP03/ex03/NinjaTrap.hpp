#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap &copy);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap &assigned);

private:
	void	ninjaShoeBox(std::string target);
};

#endif