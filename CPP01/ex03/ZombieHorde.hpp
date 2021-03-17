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

//		GETTER // SETTER

		std::string			getname(void);
		void				setname(std::string name);
		std::string			gettype(void);
		void				settype(std::string type);
		void				announce();

	private:
		std::string			z_name;
		std::string			z_type;
};

#endif