#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor of class Zombie Called" << std::endl;
	setname(getRandomName());
	settype("Random");
}


Zombie::Zombie(std::string name, std::string type)
		:m_name(name), m_type(type) {
	std::cout << getname() << ", from type: " << gettype() << ", has just been born!" << std::endl;
}

Zombie::~Zombie() {
	std::cout << m_name << " is dead!" << std::endl;
}

void 	Zombie::announceZombie()
{
	std::cout << "<" << m_name << "  (" << m_type << ")> Braiiiiinnnssss..." << std::endl;
}

std::string			Zombie::getname(void)
{
	return (this->m_name);
}

void				Zombie::setname(std::string name)
{
	this->m_name = name;
}

std::string			Zombie::gettype(void)
{
	return (this->m_type);
}

void				Zombie::settype(std::string type)
{
	this->m_type = type;
}

std::string     Zombie::getRandomName(void)
{
	std::string finalstring = "";
	std::string voyels = "aeiouy";
	std::string Consonne = "qwrtpsdfghjklzxcvbnm";

	int i = 0;
	int strlen = rand() % 10 + 1;
	while (i < strlen)
	{
		finalstring.push_back(Consonne[rand() % Consonne.length()]);
		i++;
		finalstring.push_back(voyels[rand() % voyels.length()]);
		i++;
	}
	return finalstring;
}
