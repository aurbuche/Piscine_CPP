#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class NinjaTrap : virtual public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap &copy);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap &assigned);
	void	ninjaShoeBox(ClapTrap &target);
	void	ninjaShoeBox(ScavTrap &target);
	void	ninjaShoeBox(FragTrap &target);
	void	ninjaShoeBox(NinjaTrap &target);


};

#endif