#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent();
	~ZombieEvent();
	Zombie* newZombie(std::string name);
	Zombie* randomChump();
	void setZombieType(std::string type);
	void setName(std::string name);

private:
	std::string ZombieType;
};

#endif