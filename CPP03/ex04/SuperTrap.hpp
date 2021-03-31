#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
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
		void	setAtt(std::string name);
		void	meleeAttack(std::string const & target);
		void	rangedAttack(std::string const & target);
};

#endif