#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type) {
	this->name = setname(name);
	this->type = settype(type);
	std::cout << getname() << ", from type: " << gettype() << ", has just been born!" std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " is dead!" << std::endl;
}

void 	Zombie::announceZombie()
{
	std::cout << "<" << name << "  (" << type << ")> Braiiiiinnnssss..." << std::endl;
}

std::string			Zombie::getname(void)
{
	return (this->name);
}

void				Zombie::setname(std::string name)
{
	this->name = name;
}

std::string			Zombie::gettype(void)
{
	return (this->type);
}

void				Zombie::settype(std::string type)
{
	this->type = type;
}