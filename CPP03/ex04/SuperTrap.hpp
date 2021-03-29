#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "ScavTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &rhs);
		~SuperTrap(void);
		SuperTrap			&operator=(const SuperTrap &rhs);

//		GETTER // SETTER

	private:
};

#endif