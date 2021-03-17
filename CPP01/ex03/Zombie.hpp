#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include "ZombieHorde.hpp"

class Zombie {
public:
	Zombie(std::string name, std::string type);
	~Zombie();
//	void announce();

private:
	std::string type;
	std::string name;
};

#endif