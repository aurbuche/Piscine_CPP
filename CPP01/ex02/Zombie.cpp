#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	Zombie::announce()
{
	std::cout << "<" << name << "  (" << type << ")> Braiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) {
	this->name = name;
	this->type = type;
}

Zombie::~Zombie() {
	std::cout << name << " is dead" << std::endl;
}
