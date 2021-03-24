#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include <iostream>
# include <string>
# include <cctype>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		Zombie*	randomChump(int irand);
		void	setType(std::string type);
		void	announce() const;

	private:
		int		size;
		Zombie* Horde;
};

#endif