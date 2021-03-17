#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include "ZombieEvent.hpp"

class Zombie {
private:
	std::string type;
	std::string name;

public:
	Zombie(std::string name, std::string type);
	~Zombie();
	void announce();
};

#endif