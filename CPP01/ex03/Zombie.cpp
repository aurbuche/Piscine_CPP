#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) {
	this->name = name;
	this->type = type;
}

Zombie::~Zombie() {
	std::cout << name << " is dead" << std::endl;
}